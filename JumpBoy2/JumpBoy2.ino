
/*----------------------------------
               JumpBoy2


    Created by:takaiwa@gmail.com
    Game Copyright (C) 2016 takaiwa@gmail.com

  ----------------------------------*/
#include <Arduboy2.h>
#include <ArduboyTones.h>

#include "Bitmaps.h"
#include "Sound.h"

#define NOTE_A1  110  //spring
#define NOTE_C2  131  //miss spring item(-)
#define NOTE_G2  196
#define NOTE_C3  262  //add coins item
#define NOTE_G3  392  //coin
#define NOTE_A3  440  //BOMB
#define NOTE_C4  523  //heart item,spring item(+),flag item
#define NOTE_E4  659  //Fire
#define NOTE_A4  880  //Enemy appears

#define MODE_TITLE  1
#define MODE_START  2
#define MODE_RUNNING  3
#define MODE_GAMECLEAR  4
#define MODE_GAMEOVER  5
#define MODE_CONTINUE  6

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);

uint8_t       pMode = MODE_TITLE;

unsigned long lTime;
const byte    FPS = 1000 / 30;

bool          pMissing = false;

unsigned long pWait = 0;
bool          pWaitFlg = false;


float  pASpeed = 1;

uint8_t  boundY = 10;
uint8_t  boundH = 10;

uint8_t lives = 3;
uint8_t stage = 1;
uint8_t record = 1;

int concurrent_coin_max = 1;


/*-------------------------------
    levelStart
  ------------------------------*/
void levelStart(int lvl)
{
  if (pMode == MODE_START) {
    lives = 3;
    stage = 1;
  }
  if (pMode == MODE_CONTINUE) {
    lives = 3;
  }

  if (lvl == 1) {
    arduboy.clear();
    arduboy.drawSlowXYBitmap(17, 10, bStart, 96, 48, 1);
    arduboy.display();
  }
  delay(2000);

  record = stage;
  initSpeedScroll(lvl % 10 + 1);

  pASpeed = 1 + ((lvl-1) % 10 * 0.2);
  resetKey();
  initPlayer(pASpeed);
  initSpring();
  initCoin(concurrent_coin_max);
  initPowerUp();
  initEnemy(lvl);
  initEnemyFire(1);
  initBall(lvl);
  initBullet(1);

  uint8_t n1 = 5 + lvl/10;
  uint8_t n2 = 10 + lvl/10;
  updateCoinNorma(n1, n2);

  pMode = MODE_RUNNING;
}


/*-------------------------------
    miss
  ------------------------------*/
void miss()
{
  if (!pMissing) {
    arduboy.display();
    pMissing = true;
    sound.tone(NOTE_C2, 160);
    delay(3000);

    initPowerUp();
    initSpring();
    lives--;
    if (lives <= 0) {
      pMode = MODE_TITLE;
    }
    initPlayer(pASpeed);
    pMissing = false;
  }
}


/*-------------------------------
    enemyAppears
  ------------------------------*/
void enemyAppears()
{
  arduboy.setCursor(5, 30);
  arduboy.setTextSize(1);
  arduboy.print("Enemy appears!");
  arduboy.display();
  initPlayer(pASpeed);

  // too hard
  /*
    if (stage >= 6) {
      initBall(stage);
    }
  */

  //  sound.tone(NOTE_A4, 200);
  sound.tones(songEnemyAppear);
  delay(4000);
}


/*-------------------------------
    stageClear
  ------------------------------*/
void stageClear()
{
  if (stage % 10 == 0) {
    sound.tones(songStageClear2);
  } else {
    sound.tones(songStageClear);
  }
  delay(3000);

  arduboy.clear();
  arduboy.setTextSize(1);
  arduboy.setCursor(36, 1);
  arduboy.print("Stage:");
  arduboy.print(stage);
  arduboy.drawSlowXYBitmap(17, 10, bClear, 96, 48, 1);
  arduboy.display();

  stage += 1;
  levelStart(stage);
}


/*--------------------------
     Draw Header
  -------------------------*/
void drawHeader()
{
  arduboy.fillRect(0, 0, 127, 10, 1);
  for (int i = 0; i < lives; i++) {
    arduboy.drawBitmap(3 + (i * 10) , 1 , bHeart, 8, 8, 0);
  }
  arduboy.setTextSize(1);
  arduboy.setCursor(60, 1);
  arduboy.write(' ');
  arduboy.write('S');
  arduboy.write(':');
  arduboy.print(stage);
  arduboy.write(' ');
  arduboy.write('C');
  arduboy.write(':');
  arduboy.print(getCoinQty());
  arduboy.write(' ');
}


/*-------------------------
    displayTitle
  ------------------------ */
void displayTitle()
{
  //sound.tones(songMain);

  int flash = 0;
  while (true) {
    delay( 30 );
    arduboy.clear();
    arduboy.setTextSize(2);
    arduboy.setCursor(3, 1);
    arduboy.print("JUMP BOY2");

    arduboy.drawSlowXYBitmap(14, 10, bTitle, 104, 36, 1);

    flash++;
    flash %= 50;


    if (flash < 25) {
      arduboy.setTextSize(1);
      arduboy.setCursor(30, 48);
      arduboy.print("Press A or B");
    }

    if (record > 0) {
      arduboy.setTextSize(1);
      arduboy.setCursor(1, 56);
      arduboy.print("Stage:");
      arduboy.print(record);
      arduboy.print(" ");
      arduboy.print("B:CONTINUE");
    }

    arduboy.display();

    if (arduboy.pressed(A_BUTTON)) {
      pMode = MODE_START;
      break;
    }
    if (arduboy.pressed(B_BUTTON)) {
      pMode = MODE_CONTINUE;
      break;
    }
  }
}


/*-------------------------
    setup
  ------------------------ */
void setup()
{
  //Serial.print("Entering Setup");
  arduboy.begin();
  displayTitle();
  lTime = millis();
  arduboy.initRandomSeed();
}


/*-------------------------
    LOOP
  ------------------------ */
void loop()
{
  if (pMode == MODE_TITLE) {
    displayTitle();
    return;
  }

  if (pMode == MODE_START) {
    levelStart(1);
    return;
  }

  if (pMode == MODE_CONTINUE) {
    stage = record;
    levelStart(stage);
    return;
  }

  if (pWaitFlg) {
    if (millis() > pWait) {
      //Serial.println("wait brake....");
      pWaitFlg = false;
      return;
    } else {
      //Serial.print("waiting....\n");
      //Serial.println(millis());
      return;
    }
  }

  //Serial.print("Loop");
  if (millis() > lTime + FPS) {
    arduboy.clear();
    lTime = millis();

    drawHeader();

    moveSpring();
    moveCoin();
    movePowerUp();
    moveEnemy();
    moveEnemyFire();
    moveKey();
    moveBall();
    moveBullet();
    movePlayer();

    arduboy.display();
  }
}

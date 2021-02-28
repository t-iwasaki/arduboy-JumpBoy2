/*----------------------
    Enemy
  --------------------- */

struct Enemy
{
  int w = 16;
  int h = 16;
  float x = 128;
  float y = 32;
  int ax = 1;
  int ay = 1;
  int no = 1;
  bool active = false;
  float xspd = 0;
  float yspd = 0;
  uint8_t spCount = 0;
} enemy;


void initEnemy(int no) {
  if (no > 10) {
    no = no % 10;
  }
  enemy.no = no;
  enemy.spCount = 0;
  enemy.x = 100;
  enemy.y = 10 + random(34);
  enemy.active = false;
}


void activeEnemy() {
  enemy.active = true;
}


void moveEnemy()
{
  if (enemy.active) {
    enemy.spCount++;
    moveCulcEnemy();
    if (collisionBullet(enemy.x, enemy.y, enemy.w, enemy.h)) {
      enemy.spCount = 201;
    }
  }
}


void moveCulcEnemy()
{
  switch (enemy.no) {
    case 1:
    case 2:
      actionUpdown();
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      actionReflection();
    case 7:
    case 8:
    case 9:
      actionSpeedUpReflection();
      break;
    default:
      actionUpdown();
      break;
  }
  arduboy.drawSlowXYBitmap(enemy.x, enemy.y, bEnemy[enemy.no - 1], enemy.w, enemy.h, 1);
}


void actionUpdown() {
  if (enemy.spCount % 2 != 0) {
    //stop
  }
  else if (enemy.spCount > 200) {
    //stop
  }
  else if (enemy.spCount > 400) {
    //restart
    enemy.spCount = 0;
  }
  else {
    int r = 1;
    enemy.y += r * enemy.ay;
    rangeMoveEnemy();
  }
}


void actionReflection() {
  if (enemy.spCount > 200) {
    //stop
  }
  else if (enemy.spCount > 350) {
    //restart
    enemy.spCount = 0;
  }
  else {
    int r = 1;
    enemy.x += r * enemy.ax;
    enemy.y += r * enemy.ay;
    rangeMoveEnemy();
  }
}


void actionSpeedUpReflection() {
  if (enemy.spCount > 200) {
    //stop
  }
  else if (enemy.spCount > 400) {
    //restart
    enemy.spCount = 0;
  }
  else {
    int r = random(2);
    enemy.x += r * enemy.ax;
    enemy.y += r * enemy.ay;
    rangeMoveEnemy();
  }
}


void rangeMoveEnemy() {
  if (enemy.x < 80) {
    enemy.ax = 1;
  }
  if (enemy.x > 128 - enemy.w - 8) {
    enemy.ax = -1;
  }
  if (enemy.y < 10) {
    enemy.ay = 1;
  }
  if (enemy.y > 64 - 10 - enemy.h) {
    enemy.ay = -1;
  }
}


void collisionEnemy(float playerX, float playerY, int playerW, int playerH)
{
  if (enemy.active) {
    if (enemy.x < playerX + playerW / 2 && playerX + playerW / 2 < enemy.x + enemy.w &&
        enemy.y < playerY + playerH / 2 && playerY + playerH / 2 < enemy.y + enemy.h)
    {
      miss();
    }
  }
}

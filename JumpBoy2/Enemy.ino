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
  enemy.spCount = 0;
  enemy.x = 100;
  enemy.y = 10 + random(34);
  enemy.no = no;
  enemy.active = true;
}


void moveEnemy()
{
  if (enemy.active) {
    enemy.spCount++;  
    moveCulcEnemy();
  }
}


void moveCulcEnemy()
{
  switch(enemy.no){
    case 1:
      actionEnemySnake();
      break;
    case 2:
      actionEnemyCat();
      break;
    case 3:
      actionEnemyRobo();
      break;
    default:
      actionEnemyCat();
      break;
    break;    
  }
}


void actionEnemySnake() {
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
  else{
    int r = 1;
    enemy.y+=r*enemy.ay;
    rangeMoveEnemy();    
  }
  arduboy.drawSlowXYBitmap(enemy.x, enemy.y, bEnemySnake, 16, 16, 1);
}


void actionEnemyCat() {
  if (enemy.spCount > 200) {
    //stop
  }
  else if (enemy.spCount > 350) {
    //restart
    enemy.spCount = 0;
  }
  else{
    int r = 1;
    enemy.x+=r*enemy.ax;
    enemy.y+=r*enemy.ay;
    rangeMoveEnemy();    
  }
  arduboy.drawSlowXYBitmap(enemy.x, enemy.y, bEnemyCat, 16, 16, 1);
}


void actionEnemyRobo() {
  if (enemy.spCount > 200) {
    //stop
  }
  else if (enemy.spCount > 400) {
    //restart
    enemy.spCount = 0;
  }
  else{
    int r = random(3);
    enemy.x+=r*enemy.ax;
    enemy.y+=r*enemy.ay;
    rangeMoveEnemy();    
  }
  arduboy.drawSlowXYBitmap(enemy.x, enemy.y, bEnemyRobo, 16, 16, 1);
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
    if (enemy.x < playerX + playerW/2 && playerX + playerW/2 < enemy.x + enemy.w &&
        enemy.y < playerY + playerH/2 && playerY + playerH/2 < enemy.y + enemy.h)
    {
        miss();
    }
  }
}

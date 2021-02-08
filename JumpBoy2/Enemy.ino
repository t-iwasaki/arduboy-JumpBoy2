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
  uint8_t type = 0;
  bool active = false;
  float xspd = 0;
  float yspd = 0;
  uint8_t spCount = 0;
} enemy;


void initEnemy() {
  enemy.spCount = 0;
  enemy.x = 10 + 110;
  enemy.y = 10 + random(34);
  enemy.active = true;
}


void createEnemy(uint8_t type)
{
  enemy.x = 10 + random(110);
  enemy.y = 10 + random(34);
  if (duplicatePlayerPosition(enemy.x, enemy.y)) {
    return;
  }
  enemy.spCount = 0;
  enemy.xspd = 1;
  enemy.yspd = 1.5;
  enemy.type = type;
  enemy.active = true;
}

void moveEnemy()
{
  if (enemy.active) {
    enemy.spCount++;
    moveCulcEnemy();
    arduboy.drawSlowXYBitmap(enemy.x, enemy.y, bEnemy1, 16, 16, 1);
  }
}


void moveCulcEnemy()
{
  if (enemy.spCount > 200) {
    return;
  }
  if (enemy.spCount > 350) {
    enemy.spCount = 0;
  }

  int r = random(3);
  enemy.x+=r*enemy.ax;
  enemy.y+=r*enemy.ay;

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
      if (enemy.type == 0)
      {
        miss();
      }
    }
  }
}

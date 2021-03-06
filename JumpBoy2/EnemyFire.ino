/*----------------------
    EnemyFire
  --------------------- */
const uint8_t CONCURRENT_ENEMY_FIRE_MAX = 1;

struct EnemyFire
{
  int w = 4;
  int h = 4;
  float x = 64;
  float y = 16;
  int ax = -4;
  int no = 1;
  int xrange = 0;
  bool active = false;
};
EnemyFire enemy_fire[CONCURRENT_ENEMY_FIRE_MAX];


void initEnemyFire(int no) {
  for (int i = 0; i < CONCURRENT_ENEMY_FIRE_MAX; i++) {
    enemy_fire[i].no = no;
    enemy_fire[i].active = false;
    enemy_fire[i].ax = -4;
    enemy_fire[i].xrange = 0;
    enemy_fire[i].x = 0;
    enemy_fire[i].y = 0;
  }
}


void fireEnemyFire(int x, int y) {
  for (int i = 0; i < CONCURRENT_ENEMY_FIRE_MAX; i++) {
    if (!enemy_fire[i].active) {
      sound.tone(NOTE_C3, 40);
      enemy_fire[i].active = true;
      enemy_fire[i].x = x;
      enemy_fire[i].y = y;
      enemy_fire[i].xrange = x + enemy_fire[i].ax * 5;
      return;
    }
  }
}


void moveEnemyFire()
{
  for (int i = 0; i < CONCURRENT_ENEMY_FIRE_MAX; i++) {
    if (enemy_fire[i].active) {
      enemy_fire[i].x += enemy_fire[i].ax;
      if (enemy_fire[i].x < 0 || enemy_fire[i].x > 128) {
        enemy_fire[i].active = false;
      }
      
      if (enemy_fire[i].x < enemy_fire[i].xrange) {
        enemy_fire[i].active = false;
      }

      if (enemy_fire[i].x < 0 || enemy_fire[i].x > 128) {
        enemy_fire[i].active = false;
      }

      arduboy.drawSlowXYBitmap(enemy_fire[i].x, enemy_fire[i].y, bEnemyFire, enemy_fire[i].w, enemy_fire[i].h, 1);
    }
  }
}


void collisionEnemyFire(float X, float Y, int W, int H)
{
  for (int i = 0; i < CONCURRENT_ENEMY_FIRE_MAX; i++) {
    if (enemy_fire[i].active) {
      float bx = enemy_fire[i].x + enemy_fire[i].w / 2;
      float by = enemy_fire[i].y + enemy_fire[i].h / 2;
      if (X < bx && bx < X + W && Y < by && by < Y + H) {
        enemy_fire[i].active = false;
        miss();
        return;
      }
    }
  }
  return;
}

/*----------------------
    Bullets
  --------------------- */
const uint8_t CONCURRENT_BULLET_MAX = 1;

struct Bullets
{
  int w = 4;
  int h = 4;
  float x = 64;
  float y = 16;
  int ax = 4;
  int no = 1;
  bool active = false;
};
Bullets bullets[CONCURRENT_BULLET_MAX];


void initBullet(int no) {
  for (int i = 0; i < CONCURRENT_BULLET_MAX; i++) {
    bullets[i].no = no;
    bullets[i].active = false;
    bullets[i].x = 0;
    bullets[i].y = 0;
  }
}


void fireBullet(int x,int y){
  for (int i = 0; i < CONCURRENT_BULLET_MAX; i++) {
    if (!bullets[i].active) {
      sound.tone(NOTE_E4, 40);
      bullets[i].active = true;
      bullets[i].x = x;
      bullets[i].y = y;
      return;
    }
  }
}


void moveBullet()
{
  for (int i = 0; i < CONCURRENT_BULLET_MAX; i++) {
    if (bullets[i].active) {
      bullets[i].x += bullets[i].ax;
      if (bullets[i].x < 0 || bullets[i].x > 128) {
        bullets[i].active = false;
      }
      arduboy.drawSlowXYBitmap(bullets[i].x, bullets[i].y, bBullet, bullets[i].w, bullets[i].h, 1);
    }
  }
}


bool collisionBullet(float X, float Y, int W, int H)
{
  for (int i = 0; i < CONCURRENT_BULLET_MAX; i++) {
    if (bullets[i].active) {
      float bx = bullets[i].x + bullets[i].w / 2;
      float by = bullets[i].y + bullets[i].h / 2;
      if (X < bx && bx < X + W && Y < by && by < Y + H) {        
        bullets[i].active = false;
        sound.tone(NOTE_A3, 80);
        return true;
      }
    }
  }
  return false;
}

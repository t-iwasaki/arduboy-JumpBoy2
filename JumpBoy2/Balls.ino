/*----------------------
    Balls
  --------------------- */
const uint8_t CONCURRENT_BALL_MAX = 3;

struct Balls
{
  uint8_t inispCount = 0;
  uint8_t spCount = 0;
  int w = 8;
  int h = 8;
  float x = 64;
  float y = 16;
  int ax = -1;
  int no = 1;
  bool active = false;
  bool wait = false;
};
Balls balls[CONCURRENT_BALL_MAX];


void initBall(int no) {
  if (no > 3) {
    no = no % 3 + 1;
  }
  for (int i = 0; i < CONCURRENT_BALL_MAX; i++) {
    balls[i].inispCount = 100 + random(300);
    balls[i].no = no;
    balls[i].spCount = 0;
    balls[i].active = false;
    balls[i].wait = false;
    balls[i].x = 128;
    balls[i].y = 10 + random(34);
  }
}


void waitBall() {
  for (int i = 0; i < CONCURRENT_BALL_MAX; i++) {
    balls[i].wait = true;
    balls[i].active = false;
  }
}


void moveBall()
{
  for (int i = 0; i < CONCURRENT_BALL_MAX; i++) {
    if (balls[i].wait) {
      return;
    }
    balls[i].spCount++;
    if (balls[i].active) {
      balls[i].x += balls[i].ax;
      if (balls[i].x < 0) {
        balls[i].active = false;
      }
      arduboy.drawSlowXYBitmap(balls[i].x, balls[i].y, bBird, balls[i].w, balls[i].h, 1);
    } else {
      if (balls[i].inispCount < balls[i].spCount) {
        balls[i].spCount = 0;
        balls[i].ax = -1 * random(balls[i].no) - 1;
        balls[i].inispCount = 100 + random(300);
        balls[i].x = 128;
        balls[i].active = true;
      }
    }
  }
}


void collisionBall(float playerX, float playerY, int playerW, int playerH)
{
  for (int i = 0; i < CONCURRENT_BALL_MAX; i++) {
    if (balls[i].active) {
      if (balls[i].x < playerX + playerW / 2 && playerX + playerW / 2 < balls[i].x + balls[i].w &&
          balls[i].y < playerY + playerH / 2 && playerY + playerH / 2 < balls[i].y + balls[i].h)
      {
        miss();
        balls[i].active = false;
      }
    }
  }
}

/*----------------------
    Player
  --------------------- */

struct Player
{
  bool active = false;
  int w = 8;
  int h = 8;
  float x = 128;
  float y = 32;  
  float ax = 1;
  float ay = 1;
} player;


void initPlayer(float p) {
  player.x = 10;
  player.y = 20;
  player.ax = 1;
  player.ay = p;
  player.active = true;
}


void movePlayer()
{
  if (player.active) {
    moveCulcPlayer();
    arduboy.drawSlowXYBitmap(player.x, player.y, bMan, player.w, player.h, 1);
    collisionPlayer();
  }
}


void moveCulcPlayer()
{
    if (arduboy.pressed(LEFT_BUTTON)) {
      player.x -= player.ax;
    } else if (arduboy.pressed(RIGHT_BUTTON)) {
      player.x += player.ax;
    }
    // Drop.
    player.y+=player.ay;

    // Range Check.
    if (player.y  > 56 - player.h) {
      player.y  = 56 - player.h;
    }
    if (player.y < boundY) {
      player.y  = boundY;
    }
    if (player.x > 120) {
      player.x = 120;
    }
    if (player.x < 8) {
      player.x = 8;
    }
}


void collisionPlayer()
{
    bool is_miss = false;
    if (player.y >= 56 - player.h) {
      player.ay = -1 * player.ay;
      collisionSpring(player.x, is_miss);
      if (is_miss) {
        miss();
      }
    }
    if (player.y <= 12) {
      player.ay = -1 * player.ay;
    }
    collisionPowerUp(player.x, player.y);
    collisionCoins(player.x, player.y);
    collisionKey(player.x, player.y, player.w, player.h);
    collisionEnemy(player.x, player.y, player.w, player.h);
}


bool duplicatePlayerPosition(float x, float y)
{
  return (player.x - player.w < x && x < player.x + player.w*2);
}

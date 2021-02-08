/*----------------------
    Key
  --------------------- */

struct Key
{
  int w = 8;
  int h = 8;
  float x = 120;
  float y = 32;
  bool active = false;
} key;


void initKey() {
  key.x = 10 + 110;
  key.y = 10 + random(34);
  key.active = true;
}


void resetKey() {
  key.active = false;
}

void createKey(uint8_t type)
{
  key.x = 120;
  key.y = 10 + random(34);
  key.active = true;
}


void moveKey()
{
  if (key.active) {
    arduboy.drawSlowXYBitmap(key.x, key.y, bKey, 8, 8, 1);
  }
}


void collisionKey(float playerX, float playerY, int playerW, int playerH)
{
  if (key.active) {
    if (key.x < playerX + playerW/2 && playerX + playerW/2 < key.x + key.w &&
        key.y < playerY + playerH/2 && playerY + playerH/2 < key.y + key.h)
    {
      stageClear();
      key.active = false;
    }
  }
}

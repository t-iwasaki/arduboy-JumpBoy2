/*----------------------
    Coins:
  --------------------- */
const uint8_t CONCURRENT_COIN_MAX = 10;

struct Coin
{
  uint8_t spCount = 0;
  uint8_t qty = 0;
  uint8_t norma = 10;
  uint8_t concurrent_coin_max = CONCURRENT_COIN_MAX;
  bool is_puzzle = false;
  bool is_puzzle_prepare = false;  
} coin;


struct Coins
{
  float x = 64;
  float y = 16;
  bool active = false;
  uint8_t spCount = 0;
};
Coins coins[CONCURRENT_COIN_MAX];


void initCoin(int concurrent_coin_max,bool is_puzzle)
{
  coin.spCount = 0;
  coin.qty = 0;
  
  coin.is_puzzle = is_puzzle;
  coin.is_puzzle_prepare = false;

  coin.norma = (coin.is_puzzle) ? concurrent_coin_max : 10;
  coin.concurrent_coin_max = (concurrent_coin_max > CONCURRENT_COIN_MAX ) ? CONCURRENT_COIN_MAX : concurrent_coin_max;
  
  for (int i = 0; i < CONCURRENT_COIN_MAX; i++) {
    coins[i].active = false;
  }
}


void updateCurrentCoinMax(int concurrent_coin_max)
{
  coin.concurrent_coin_max = (concurrent_coin_max > CONCURRENT_COIN_MAX ) ? CONCURRENT_COIN_MAX : concurrent_coin_max;  
}


void resetSpCount()
{
  coin.spCount = 0;
}


void moveCoin()
{
  moveCulcCoin();
  drawCoin();
}


void moveCulcCoin()
{
  if (coin.is_puzzle && !coin.is_puzzle_prepare) {
    coin.is_puzzle_prepare = true;
    _createCoins();
  } else {
    coin.spCount++;
    if (coin.spCount == 200)
    {
      coin.spCount = 0;
      updateCurrentCoinMax(1);
    } 
      _createCoins();
  }
  _checkCoinsLife();
}


void _createCoins()
{
  for (int i = 0; i < coin.concurrent_coin_max; i++) {
    if (coins[i].active == false) {
      if (coin.is_puzzle) {
        // 高さは同じで横に等間隔にコインを配置
        coins[i].x = 10 + i * 10;
        coins[i].y = 10 + 30;
      }
      int x = 10 + random(100);
      int y = 10 + random(34);

      if (!duplicatePlayerPosition(x, y)) {
        coins[i].x = x;
        coins[i].y = y;
        coins[i].spCount = 40 + random(80);
//        coins[i].spCount = 50;
        coins[i].active = true;
      }
    }
  }
}


void _checkCoinsLife()
{
  for (int i = 0; i < coin.concurrent_coin_max; i++) {
    coins[i].spCount--;
    if (coins[i].spCount <= 0) {
      coins[i].active = false;
    }
  }
}


void collisionCoins(float playerX, float playerY)
{
  for (int i = 0; i < coin.concurrent_coin_max; i++) {
    if (coins[i].active) {
      if (coins[i].x < playerX + 8 &&
          coins[i].x + 8 > playerX &&
          coins[i].y < playerY + 8 &&
          8 + coins[i].y > playerY)
      {
        sound.tone(NOTE_G3, 80);
        coin.qty++;
        coins[i].active = false;
        if (coin.qty >= coin.norma) {          
          initKey();
          return;
        }
      }
    }
  }
}


uint8_t getCoinQty()
{
  return coin.qty;
}


void drawCoin()
{
  for (int i = 0; i < coin.concurrent_coin_max; i++) {
    if (coins[i].active) {
      arduboy.drawBitmap(coins[i].x, coins[i].y, bCoin, 8, 8, 1);
    }    
  }
}

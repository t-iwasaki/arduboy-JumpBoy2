#ifndef _Bitmaps.h_
#define _Bitmaps.h_


// Heart White
const uint8_t bHeart [] PROGMEM = {0x1E, 0x3F, 0x7E, 0xFC, 0xFC, 0x7E, 0x3F, 0x1E};
// Heart Black
const uint8_t bHeartB [] PROGMEM = {0xE1, 0xC0, 0x81, 0x03, 0x03, 0x81, 0xC0, 0xE1};
// Man
const uint8_t bMan [] PROGMEM = {0x7E, 0x81, 0xA5, 0x81, 0x7E, 0x3C, 0x24, 0x66};
// Coin
const uint8_t bCoin [] PROGMEM   = {0x18, 0x24, 0x42, 0x4A, 0x52, 0x42, 0x24, 0x18};
// Key
const uint8_t bKey [] PROGMEM   = {0x00, 0x00, 0x60, 0x95, 0x9F, 0x60, 0x00, 0x00};
// Ball
const uint8_t bBall8 [] PROGMEM = {0x3C, 0x66, 0xC3, 0x89, 0x81, 0xC3, 0x66, 0x3C};
const uint8_t bBird [] PROGMEM  = {0x3C, 0x42, 0x41, 0xD2, 0x01, 0xE2, 0x21, 0x1C};
// Bullet
const uint8_t bBullet [] PROGMEM = {0x60, 0x90, 0x90, 0x60};


/*
    Spring
*/
const uint8_t bSpring4 [] PROGMEM = {0xFF, 0x81, 0xFF, 0x81, 0xFF, 0x81, 0xFF, 0x81};
const uint8_t bSpring3 [] PROGMEM = {0xFF, 0x81, 0xFF, 0x81, 0xFF, 0x81, 0xFF, 0xFF};
const uint8_t bSpring2 [] PROGMEM = {0xFF, 0x81, 0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF};
const uint8_t bSpring1 [] PROGMEM = {0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
const uint8_t bEmpty [] PROGMEM   = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

/*
    Item
*/
const uint8_t bItemPlus [] PROGMEM   = {0xFF, 0x81, 0x89, 0xBD, 0x89, 0x89, 0x81, 0xFF};
const uint8_t bItemMinus [] PROGMEM   = {0xFF, 0x81, 0x81, 0xBD, 0x81, 0x81, 0x81, 0xFF};
const uint8_t bItemAddCoins [] PROGMEM   = {0x7E, 0x81, 0xA5, 0x99, 0xA5, 0x81, 0x81, 0x7E};
const uint8_t bItemFlag [] PROGMEM   = {0xFF, 0x81, 0xA9, 0x95, 0xA9, 0x95, 0x81, 0xFF};

/*
   Enemy
*/
const uint8_t PROGMEM bEnemyCat[] =
{0x04, 0x04, 0x08, 0x0C, 0x14, 0x1A, 0x2D, 0xD6,
0x3F, 0xFF, 0x3B, 0xEF, 0x3B, 0xEF, 0x3F, 0xFE,
0x1E, 0x3C, 0x0E, 0xBC, 0x47, 0xF0, 0x38, 0x06,
0x76, 0xDE, 0x06, 0x38, 0x07, 0xF8, 0x0E, 0x1C}
;

const uint8_t PROGMEM bEnemySnake[] =
{0x00, 0x00, 0x1F, 0xC0, 0x3F, 0xF0, 0x7F, 0xF8, 
0x7F, 0xF8, 0x6F, 0x78, 0x46, 0x3C, 0x6F, 0x7C, 
0x7F, 0xFC, 0x7F, 0xFE, 0x6F, 0xBE, 0x30, 0x6F, 
0x1A, 0xCF, 0x02, 0x0F, 0x06, 0x0F, 0x00, 0x07}
;

const uint8_t PROGMEM bEnemyDog[] =
{0x00, 0x00, 0x0F, 0x00, 0xDF, 0xD8, 0xBF, 0xEC, 
0xAE, 0xE4, 0x2E, 0xF4, 0x7F, 0xF0, 0xE3, 0xF8, 
0x7F, 0xFC, 0x41, 0xFE, 0x9C, 0x7F, 0xC0, 0xEF, 
0x40, 0xC7, 0x41, 0x8D, 0x3E, 0x1B, 0x00, 0x17}
;

const uint8_t PROGMEM bEnemyKnight[] =
{0x05, 0x40, 0x07, 0x40, 0x05, 0xE0, 0x0F, 0xE2, 
0x0C, 0x22, 0x07, 0xC2, 0x23, 0xC2, 0x72, 0x82, 
0xDF, 0xE2, 0xF5, 0x37, 0xF6, 0x6A, 0xE7, 0xC0, 
0x67, 0xE0, 0x0D, 0x30, 0x18, 0x30, 0x1C, 0x18}
;

const uint8_t PROGMEM bEnemyDragon[] =
{0x20, 0xC0, 0x40, 0x20, 0x20, 0x60, 0x10, 0xC0, 
0x1F, 0x80, 0x3F, 0xC0, 0x26, 0x60, 0x7F, 0xF0, 
0x3F, 0xD8, 0x1F, 0xDC, 0x01, 0x14, 0x01, 0xF6, 
0x01, 0x8E, 0x03, 0xF6, 0x07, 0x0F, 0x07, 0xFF}
;

const uint8_t PROGMEM bEnemyAzarashi[] =
{0x00, 0x00, 0x0F, 0x00, 0x1F, 0xC0, 0x3F, 0xE0, 
0x2E, 0xE0, 0x2E, 0xF0, 0x7F, 0xB0, 0xE7, 0x78, 
0x7F, 0xBC, 0x5D, 0xFE, 0x00, 0x7F, 0x00, 0xEF, 
0x00, 0xC7, 0x01, 0x8D, 0x00, 0x11, 0x00, 0x06}
;


/*
    Clear Screen
*/
const uint8_t bClear [] PROGMEM =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xC1, 0x00, 0x3F, 0xE0, 0x30,
  0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE1,
  0x00, 0x3F, 0xC0, 0x70, 0x0C, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x38, 0x31, 0x00, 0x20, 0x00, 0x78,
  0x08, 0x18, 0x00, 0x00, 0x00, 0x00, 0x30, 0x31,
  0x00, 0x20, 0x00, 0x58, 0x08, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x01, 0x00, 0x20, 0x00, 0xC8,
  0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01,
  0x00, 0x20, 0x00, 0xCC, 0x08, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x01, 0x00, 0x3F, 0x81, 0x8C,
  0x0C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01,
  0x00, 0x3F, 0xC1, 0x86, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x01, 0x00, 0x20, 0x01, 0x06,
  0x08, 0x30, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01,
  0x00, 0x20, 0x03, 0xFE, 0x08, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x11, 0x00, 0x20, 0x03, 0xFF,
  0x08, 0x18, 0x00, 0x00, 0x00, 0x00, 0x30, 0x31,
  0x00, 0x20, 0x02, 0x03, 0x08, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x38, 0x31, 0x00, 0x20, 0x06, 0x01,
  0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE1,
  0xFF, 0x3F, 0xC6, 0x01, 0x88, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xC1, 0xFF, 0x3F, 0xE4, 0x01,
  0x88, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x61, 0xE7, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00,
  0x00, 0x87, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x01, 0x1C, 0x02, 0x40,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00,
  0x03, 0x20, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x88, 0x00, 0x06, 0x61, 0x81, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCF, 0xE0,
  0x04, 0xC3, 0x81, 0x90, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0x70, 0x04, 0x8E, 0x00, 0x98,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x30,
  0x0C, 0x9E, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x10, 0x09, 0x90, 0x00, 0x48,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x30,
  0x09, 0x10, 0x00, 0x48, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xB0, 0x09, 0x18, 0x00, 0x48,
  0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xE0,
  0x05, 0x18, 0x00, 0x48, 0x88, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xC0, 0x05, 0x98, 0x00, 0x48,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
  0x04, 0x88, 0x00, 0x58, 0x0B, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0xC4, 0x00, 0xD1,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x60, 0x01, 0xB1, 0xF3, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x03, 0x60,
  0xE2, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x30, 0x02, 0xC0, 0x20, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x90, 0x01, 0x80,
  0x43, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0xFE, 0x0F, 0xFC, 0x42, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xE3, 0xA3, 0xF8, 0x07,
  0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x81, 0x80, 0x00, 0x00
}
;

const uint8_t bStart [] PROGMEM =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x0F, 0xFF, 0x06, 0x00, 0xFF,
  0x83, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0x0F,
  0xFF, 0x0F, 0x00, 0xFF, 0xE3, 0xFF, 0xC0, 0x00,
  0x00, 0x01, 0x83, 0x80, 0x60, 0x0F, 0x00, 0xC0,
  0x60, 0x18, 0x00, 0x00, 0x00, 0x01, 0x81, 0x80,
  0x60, 0x0F, 0x00, 0xC0, 0x60, 0x18, 0x00, 0x00,
  0x00, 0x03, 0x00, 0x80, 0x60, 0x1B, 0x80, 0xC0,
  0x30, 0x18, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00,
  0x60, 0x19, 0x80, 0xC0, 0x60, 0x18, 0x00, 0x00,
  0x00, 0x01, 0x80, 0x00, 0x60, 0x39, 0x80, 0xC0,
  0x60, 0x18, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x60, 0x30, 0xC0, 0xC0, 0xE0, 0x18, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x60, 0x30, 0xC0, 0xFF,
  0xC0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x60, 0x70, 0xC0, 0xFF, 0x80, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x80, 0x60, 0x60, 0x60, 0xC1,
  0xC0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
  0x60, 0x7F, 0xE0, 0xC0, 0xC0, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0, 0x60, 0xFF, 0xF0, 0xC0,
  0x60, 0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0xC0,
  0x60, 0xC0, 0x30, 0xC0, 0x60, 0x18, 0x00, 0x00,
  0x00, 0x03, 0x80, 0xC0, 0x60, 0xC0, 0x30, 0xC0,
  0x60, 0x18, 0x00, 0x00, 0x00, 0x01, 0xC1, 0x80,
  0x61, 0x80, 0x18, 0xC0, 0x30, 0x18, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0x80, 0x61, 0x80, 0x18, 0xC0,
  0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x61, 0x80, 0x18, 0xC0, 0x30, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}
;

/*
    Title
*/
const uint8_t bTitle [] PROGMEM =
{ 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF9, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x1C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x08, 0x3F, 0xE2, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xC0,
  0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x21, 0x82, 0x3C, 0x80, 0x06,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x41, 0x06, 0x24, 0xC0, 0x09, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x1F, 0x06,
  0x40, 0x10, 0x80, 0x00, 0x00, 0xC0, 0x00, 0x00,
  0x00, 0x01, 0x81, 0x3E, 0x02, 0x40, 0x10, 0x80,
  0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x01, 0x03,
  0x38, 0x03, 0x20, 0x09, 0x00, 0x00, 0x02, 0x10,
  0x00, 0x00, 0x00, 0x01, 0x02, 0x38, 0x01, 0x20,
  0x06, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00,
  0x01, 0x02, 0x70, 0x01, 0x30, 0x00, 0x00, 0x00,
  0x01, 0x20, 0x00, 0x00, 0x00, 0x01, 0x02, 0x70,
  0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00,
  0x00, 0x00, 0x01, 0x02, 0x70, 0x00, 0x90, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x02, 0x70, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x78, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x03, 0x08, 0x00, 0x50, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81,
  0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0xD0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0xC0, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40,
  0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x40, 0x3F, 0xFE, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x10, 0x3E, 0x1F, 0xC3, 0xFF,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x70, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xA3,
  0xF3, 0xF0, 0xD0, 0x00, 0x00, 0x03, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x20, 0x1E, 0x00, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xC0, 0x00,
  0x01, 0xC1, 0xC0, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x18, 0x70, 0x03, 0x80, 0x00, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68,
  0x0F, 0xFE, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xC3, 0x80, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xFF,
  0xC0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x87, 0x8F, 0xF8, 0x00, 0x00, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
}
;



#endif

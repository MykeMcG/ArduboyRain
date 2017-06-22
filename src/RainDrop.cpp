#include <Arduboy2.h>
#include "RainDrop.h"

const int spriteWidth       =    8;
const int spriteHeight      =   16;
const int minSpawnPositionX =    0;
const int maxSpawnPositionX =  128;
const int minSpawnPositionY = -100;
const int maxSpawnPositionY =  -20;
const int despawnPositionY  =   64 + spriteHeight;
const int dropSpeed         =    1;
const unsigned char sprite1[] PROGMEM = { 0x00, 0x00, 0x00, 0xa2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfd, 0x00, 0x00, 0x00, };
//const unsigned char sprite2[] PROGMEM = { };

RainDrop :: RainDrop() {
    PosX = random(minSpawnPositionX, maxSpawnPositionX);
    PosY = random(minSpawnPositionY, maxSpawnPositionY);
}

void RainDrop :: Update() {
    PosY += dropSpeed;
    if (PosY > despawnPositionY) {
        PosX = random(minSpawnPositionX, maxSpawnPositionX);
        PosY = random(minSpawnPositionY, maxSpawnPositionY);
    }
}

void RainDrop :: Draw(Arduboy2 arduboy) {
    //if (PosY % 2 == 0) {
    arduboy.drawBitmap(PosX, PosY, sprite1, spriteWidth, spriteHeight);
    //} else {
    //arduboy.drawBitmap(PosX, PosY, sprite2, spriteWidth, spriteHeight);
    //}
}

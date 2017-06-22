#include <Arduboy2.h>
#include "RainDrop.h"

const int dropCount = 15;
RainDrop *drops[dropCount] = {};

Arduboy2 arduboy;

RainDrop drop;

void setup() {
    arduboy.begin();
    arduboy.clear();
    arduboy.initRandomSeed();
    initDrops();
}

void initDrops() {
    for (int i = 0; i < dropCount; i++) {
        drops[i] = new RainDrop();
    }
}

void loop() {
    update();
    draw();
}

void update() {
    for (int i = 0; i < dropCount; i++) {
        drops[i]->Update();
    }
}

void draw() {
    arduboy.clear();
    for (int i = 0; i < dropCount; i++) {
        drops[i]->Draw(arduboy);
    }
    arduboy.display();
}

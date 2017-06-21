#ifndef RAINDROP_H
#define RAINDROP_H

class RainDrop {
  private:
    const int spriteWidth;
    const int spriteHeight;
    const int minSpawnPositionX;
    const int maxSpawnPositionX;
    const int minSpawnPositionY;
    const int maxSpawnPositionY;
    const int dropSpeed;
    const unsigned char sprite1[] PROGMEM;
    const unsigned char sprite2[] PROGMEM;
    
  public:
    int PosX;
    int PosY;
  
    //Initialize with random position
    RainDrop();
    //Update the RainDrop's position
    void Update();
    //Draw the RainDrop to the screen
    void Draw(Arduboy2 arduboy);
};

#endif

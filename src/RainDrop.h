#ifndef RAINDROP_H
#define RAINDROP_H

class RainDrop {
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

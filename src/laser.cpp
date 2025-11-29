#include "laser.hpp"
#include <iostream>

Laser::Laser(Vector2 position, int speed)
{
  this -> position = position;
  this -> speed = speed;
  active = true;
}

void Laser::Draw(){
  if(active){
    DrawRectangle((int)position.x, (int)position.y, 4, 15, Color{243, 216, 63, 255});
  }
}

void Laser::Update() {
  position.y += speed;
  if(active) {
    if(position.y > GetScreenHeight() || position.y < 0) {
      active = false;
    }
  }
}

Laser::~Laser()
{

}
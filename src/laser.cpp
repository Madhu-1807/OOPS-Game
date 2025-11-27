#include "laser.hpp"

Laser::Laser(Vector2 position, int speed)
{
  this -> position = position;
  this -> speed = speed;
  active = true;
}

void Laser::Draw(){
  DrawRectangle((int)position.x, (int)position.y, 4, 15, Color{243, 216, 63, 255});
}

void Laser::Update() {
  position.y += speed;
}

Laser::~Laser()
{

}
#include "spaceship.hpp"

Spaceship::Spaceship()
{
  image = LoadTexture("Graphics/spaceship.png");
  position.x = (GetScreenWidth() - image.width)/2;
  position.y = GetScreenHeight() - image.height;
  lastFireTime = 0.0;
}

Spaceship::~Spaceship()
{
  UnloadTexture(image);
}

void Spaceship::Draw()
{
  DrawTextureV(image,position, WHITE);
}

void Spaceship::MoveLeft(){
  position.x -= 7;
  if(position.x < 0) {
    position.x = 0;
  }
}

void Spaceship::MoveRight(){
  position.x += 7;
  if(position.x > GetScreenWidth() - image.width){
    position.x = GetScreenWidth() - image.width;
  }
}

void Spaceship::FireLaser()
{
  if(GetTime() - lastFireTime >= 0.35) {
    Vector2 laserPos = {position.x + image.width/2 - 2, position.y};
    lasers.push_back(Laser(laserPos, -6));
    lastFireTime = GetTime();
  }
  
}

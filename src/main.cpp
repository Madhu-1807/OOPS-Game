#include <raylib.h>
#include "spaceship.hpp"

int main() 
{
    Color grey = { 29, 29, 27, 255};
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth,windowHeight, "Titan Attacks");
    SetTargetFPS(60);

    Spaceship spaceship;

    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(grey);
        spaceship.Draw();

        EndDrawing();
    }

    CloseWindow();

}
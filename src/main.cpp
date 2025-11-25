#include <raylib.h>

int main() 
{
    Color grey = { 29, 29, 27, 255};
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth,windowHeight, "Titan Attacks");
    SetTargetFPS(60);

    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(grey);

        EndDrawing();
    }

    CloseWindow();

}
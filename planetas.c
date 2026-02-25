#include "raylib.h"
#include <math.h>

void object(int originX, int originY, int radio, double tiempo)
{
  DrawCircle(originX+radio*cos(tiempo), originY+radio*sin(tiempo), 10, RED);
}


int main(void)
{
  InitWindow(800,600,"Planetas");
  double i=0;
  int originX = 400;
  int originY = 300;
  int radioOrb = 100;
  while(!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawFPS(10, 10);
    DrawCircle(originX, originY, 50, WHITE);
    DrawCircleLines(originX, originY, radioOrb, GRAY);
    object(originX, originY, radioOrb, i);
    EndDrawing();
    i += 0.01;
  }
  CloseWindow();
  return 0;

}


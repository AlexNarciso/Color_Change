#include "raylib.h"

int main(){

//color change nº
int n=0;

//window size
int width=1280,
height=720;

//Background color
Color color = WHITE;

InitWindow(width,height,"Color_change");


while(WindowShouldClose() == false){
BeginDrawing();
ClearBackground(color);

if(IsKeyPressed(KEY_R)){
  color=RED;
}

if(IsKeyPressed(KEY_B)){
    if(n==0){

    
        color=BLUE;
        n++;
    }else{
        color=BLACK;
        n=0;
    }
}

if(IsKeyPressed(KEY_W)){
  color=WHITE;
}

if(IsKeyPressed(KEY_G)){
  color=GREEN;
}

if(IsKeyPressed(KEY_Y)){
  color=YELLOW;
}


EndDrawing();
}


}
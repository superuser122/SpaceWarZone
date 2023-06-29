#include "splash_screen.h"

void splash_screen(GameState *state, float* splash_life_time){

    if(*splash_life_time < 0){
        *state = MAIN_MENU;
        return;
    }
    ClearBackground(RAYWHITE);

    DrawText("THIS IS MY LOGO", 190, 200, 35, LIGHTGRAY);
    *splash_life_time -= GetFrameTime();
}
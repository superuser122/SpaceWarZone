#include "level_one.h"

void level_one_run(LevelOne **level_one){
    //Setup. Run the first time

    if(*level_one == NULL){
        *level_one = (LevelOne*)malloc(sizeof(LevelOne));
        (*level_one)->background = LoadTexture("assets/level_one_bg.png"); 
        return;
    }
   level_one_render((*level_one));
   
}

void level_one_render(LevelOne *level_one){
    DrawTexture(level_one->background,0,0,WHITE);
}
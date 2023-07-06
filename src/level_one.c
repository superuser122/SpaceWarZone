#include "level_one.h"

void level_one_run(LevelOne **level_one, Player *player){
    //Setup. Run the first time

    if(*level_one == NULL){
        *level_one = (LevelOne*)malloc(sizeof(LevelOne));
        (*level_one)->player = player;
        (*level_one)->background = LoadTexture("assets/level_one_bg.png"); 
        return;
    }
   level_one_render((*level_one));
   level_one_update((*level_one));
   
}

void level_one_render(LevelOne *level_one){
    DrawTexture(level_one->background,0,0,WHITE);
    player_render(level_one->player);
}

void level_one_update(LevelOne *level_one){
    player_update(level_one->player);
}
#include "level_one.h"

void level_one_run(LevelOne **self, Player *player, GameSettings *settings){
    //Setup. Run the first time

    if(*self == NULL){
        *self = (LevelOne*)malloc(sizeof(LevelOne));
        (*self)->player = player;
        (*self)->settings = settings;
        (*self)->background = LoadTexture("assets/level_one_bg.png");
        for(size_t i = 0; i < 100; i++){
            (*self)->bullets[i].active = false;
        }
        
        return;
    }
   level_one_render((*self));
   level_one_update((*self));
   
}

void level_one_render(LevelOne *self){
    DrawTexture(self->background,0,0,WHITE);
    player_render(self->player);
    for(size_t i = 0; i < 100; i++){
        if(!self->bullets[i].active) continue;
        bullet_update(&self->bullets[i]);
        if(self->bullets[i].position.x > self->settings->screen_width + 10 
        || self->bullets[i].position.x < - 10 
        || self->bullets[i].position.y > self->settings->screen_height + 10 
        || self->bullets[i].position.y < -10){
            self->bullets[i].active = false;
        }
    }
}

void level_one_update(LevelOne *self){
    player_update(self->player);
    player_shoot(self->player, self->bullets);
    for(size_t i = 0; i < 100; i++){
        if(!self->bullets[i].active) continue;
        bullet_render(&self->bullets[i]);
        
    }
}
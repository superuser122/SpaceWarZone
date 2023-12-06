#include "player.h"


void player_render(Player *self){
    Rectangle frameRec = { 0.0f, 0.0f, (float)self->texture.width, (float)self->texture.height };
    DrawTextureRec(self->texture, frameRec, self->position, WHITE);    
}

void player_update(Player *self){
    player_move(self);
}

void player_move(Player *self){
    float deltaTime = GetFrameTime();
    Vector2 direction = {.x =0, .y = 0};
    if (IsKeyDown(KEY_UP)){
        direction.y = -1;
    }
    if (IsKeyDown(KEY_DOWN)){
        direction.y = 1;
    }
    if (IsKeyDown(KEY_LEFT)){
        direction.x = -1;
    }
    if (IsKeyDown(KEY_RIGHT)){
        direction.x = 1;
    }
    self->position.x += direction.x * self->speed * deltaTime;
    self->position.y += direction.y * self->speed * deltaTime;

}

void player_shoot(Player *self,Bullet bullets[]){

    if (IsKeyPressed(KEY_SPACE)){
        for(int i = 0; i < 100; i++ ){
            if(!bullets[i].active){
                bullets[i].position.x = self->position.x + (float)self->texture.width / 2 ;
                bullets[i].position.y = self->position.y + (float)self->texture.height / 2;
                bullets[i].speed = 1000;
                bullets[i].type = NORMAL;
                bullets[i].velocity.x = 1;
                bullets[i].velocity.y = 2;
                bullets[i].active = true;
                return;
            }
        }

    }
}
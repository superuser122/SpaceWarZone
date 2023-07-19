#include "level_one.h"

void level_one_run(LevelOne **self, Player *player, GameSettings *settings){
    //Setup. Run the first time

    if(*self == NULL){
        *self = (LevelOne*)malloc(sizeof(LevelOne));
        (*self)->player = player;
        (*self)->settings = settings;
        (*self)->background = LoadTexture("assets/level_one_bg.png");
        (*self)->enemies = NULL;
        timer_start(&(*self)->timer, 600);
        Texture2D bullet_sprite = LoadTexture("assets/bullet.png");
        for(size_t i = 0; i < 100; i++){
            (*self)->bullets[i].active = false;
            (*self)->bullets[i].sprite = bullet_sprite;
            (*self)->stars[i].position.x =  (float)GetRandomValue(0, settings->screen_width);
            (*self)->stars[i].position.y =  (float)GetRandomValue(0, settings->screen_height);
            (*self)->stars[i].size =  (float)GetRandomValue(3, 1);
            (*self)->stars[i].speed =  (float)GetRandomValue(150, 300);
            printf("x = %.6f y = %.6f \n", (*self)->stars[i].position.x, (*self)->stars[i].position.y );
        }
        
        
        return;
    }
   level_one_render((*self));
   level_one_update((*self));
   
}

void level_one_render(LevelOne *self){
    DrawTexture(self->background,0,0,WHITE);
    for(size_t i = 0; i < 100; i++){
        stars_render(&self->stars[i]);
        if(!self->bullets[i].active) continue;
        if(self->bullets[i].position.x > self->settings->screen_width + 10 
        || self->bullets[i].position.x < - 10 
        || self->bullets[i].position.y > self->settings->screen_height + 10 
        || self->bullets[i].position.y < -10){
            self->bullets[i].active = false;
        }
        bullet_update(&self->bullets[i]);
    }
    player_render(self->player);

    EnemyNode *current_enemy = self->enemies;
    while (current_enemy != NULL){
         DrawTextureRec(current_enemy->enemy.texture, current_enemy->enemy.body_collider, current_enemy->enemy.position, WHITE);
         current_enemy = current_enemy->next;

    }
    printf("Seconds passed: %f \n", self->timer.life_time);
    
}

void level_one_update(LevelOne *self){
    timer_update(&self->timer);
    player_update(self->player);
    player_shoot(self->player, self->bullets);
    for(size_t i = 0; i < 100; i++){
        stars_update(&self->stars[i], self->settings);
        if(!self->bullets[i].active) continue;
        bullet_render(&self->bullets[i]);
    }


    if(self->timer.life_time > 480 && self->timer.life_time < 590){
        printf("time to spawn enemies---------------------------------------------------------------------");
        if( self->enemies == NULL ){
            //Texture2D scout_sprite = LoadTexture("assets/scout_lvl1.png");
            for(size_t i = 0; i < 10; i++){
                Enemy enemy = {0};
                enemy.position.x = 1280 + i * 50;
                enemy.position.y = 100 + i * 50;
                enemy.body_collider.height = 35;
                enemy.body_collider.width = 77;
                enemy.body_collider.x = 25;
                enemy.body_collider.y = 45;
                enemy.texture = LoadTexture("assets/scout_lvl1.png");
                enemy.type = LEVEL_ONE_SCOUT;
                enemy_node_insert(&self->enemies, enemy);
                printf(" %d Enemy spawned", (int)i);

            }
            
        }else{
            EnemyNode *current = self->enemies;
            while (current != NULL){
                current->enemy.position.x -= 300 * GetFrameTime();
                current = current->next;
            }

        }
        



    }

   
    
}
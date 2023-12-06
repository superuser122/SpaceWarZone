#include "splash_screen.h"


void splash_screen_run(SplashScreen **splash_screen, GameState* game_state){

    if(*splash_screen == NULL){
        *splash_screen = (SplashScreen*)malloc(sizeof(SplashScreen));
        (*splash_screen)->splash_lifetime = 2;
        (*splash_screen)->logo = LoadTexture("assets/logo.png"); 
    }

    if((*splash_screen)->splash_lifetime < 0){
        *game_state = MAIN_MENU;
        UnloadTexture((*splash_screen)->logo);
        free((*splash_screen));
        return;
    }
    ClearBackground(RAYWHITE);
    DrawTexture((*splash_screen)->logo,0,0,WHITE);
    (*splash_screen)->splash_lifetime -= GetFrameTime();
    
}
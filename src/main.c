#include "raylib.h"
#include "splash_screen.h"
#include "main_menu.h"

int main(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    float splash_life_time = 2;

    GameState game_state = SPLASH;

    MainMenu main_menu;
    main_menu.initiliazed = false;
    // MainMenu *main_menu = (MainMenu*)malloc(sizeof(MainMenu));
    // main_menu->initiliazed = false;

    InitWindow(screenWidth, screenHeight, "Amazing Game");

    SetTargetFPS(60);              
    while (!WindowShouldClose()){
        ClearBackground(RAYWHITE);
        BeginDrawing();
        switch (game_state){
            case SPLASH:
                splash_screen(&game_state, &splash_life_time);
                break;
            case MAIN_MENU:
                run_main_menu(&main_menu, &game_state);
                break;
            case LEVEL_ONE:
                break;
            case PAUSE:
                break;
            default:
                break;
        }
        
        EndDrawing();
    }

    CloseWindow();      

    return 0;
}
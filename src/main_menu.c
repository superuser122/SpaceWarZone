#include "main_menu.h"

void main_menu_run(MainMenu **menu, GameState *game_state){
    //Setup. Run the first time
    if(*menu == NULL){
        *menu = (MainMenu*)malloc(sizeof(MainMenu));
        (*menu)->background = LoadTexture("assets/menu.png"); 
        return;
    }
    main_menu_update((*menu), game_state);
    main_menu_render((*menu));
    
}


void main_menu_update(MainMenu *menu, GameState *game_state){
    if (IsKeyDown(KEY_ENTER)){
        *game_state = LEVEL_ONE;
    }
    
}

void main_menu_render(MainMenu *menu){
    Rectangle r = { .x = 0, .y = 0, .width = 50, .height = 50};
    Vector2 p = { .x = 200, .y = 300};

    DrawTexture(menu->background,0,0,WHITE);
    //DrawTextureRec(menu->background, r, p, WHITE);

}
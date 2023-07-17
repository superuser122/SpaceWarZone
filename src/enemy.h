#ifndef ENEMY_H
#define ENEMY_H
#include "raylib.h"
#include <stdlib.h>

typedef enum {
    LEVEL_ONE_SCOUT,
} EnemyType;

typedef struct{
    Texture2D texture;
    Rectangle body_collider;
    Vector2 position;
    EnemyType type;
    float speed;
    int health;
} Enemy;

typedef struct EnemyNode EnemyNode;

// Node structure
struct EnemyNode{
    Enemy enemy;
    EnemyNode* prev;
    EnemyNode* next;
};

// Function to insert a new node at the end of the linked list
void enemy_node_insert(EnemyNode** head, Enemy enemy); 

#endif
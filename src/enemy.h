#ifndef ENEMY_H
#define ENEMY_H
#include "raylib.h"
#include <stdlib.h>


// Node structure
typedef struct{
    int data;
    Node* prev;
    Node* next;
} Node ;

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int data); 

#endif
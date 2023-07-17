#include "enemy.h"

// Function to insert a new node at the end of the linked list
void enemy_node_insert(EnemyNode** head, Enemy enemy){
    // Create a new node
    EnemyNode *newNode = (EnemyNode*)malloc(sizeof(EnemyNode));

    // Set data and next pointer
    newNode->enemy = enemy;
    newNode->next = NULL;

    // If the list is empty, make the new node as the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    // Find the last node
    EnemyNode* lastNode = *head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    // Set the new node as the last node
    lastNode->next = newNode;
    newNode->prev = lastNode;
}
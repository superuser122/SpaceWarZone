#include "enemy.h"

// Function to insert a new node at the end of the linked list
void enemy_node_insert(EnemyNode** head, Enemy enemy){
    // Create a new node
    EnemyNode *new_node = (EnemyNode*)malloc(sizeof(EnemyNode));

    // Set data and next pointer
    new_node->enemy = enemy;
    new_node->next = NULL;

    // If the list is empty, make the new node as the head
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    // Find the last node
    EnemyNode* last_node = *head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }

    // Set the new node as the last node
    last_node->next = new_node;
    new_node->prev = last_node;
}
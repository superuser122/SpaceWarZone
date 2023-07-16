#include "enemy.h"

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int data){
    // Create a new node
    Node *newNode = (Node*)malloc(sizeof(Node));

    // Set data and next pointer
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node as the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    // Find the last node
    Node* lastNode = *head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    // Set the new node as the last node
    lastNode->next = newNode;
    newNode->prev = lastNode;
}
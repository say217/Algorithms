#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp;
    struct Node* newNode;

    // --- Step 1: Create initial circular linked list manually ---
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = first; // last node points to head

    head = first;

    printf("Initial Circular Linked List:\n");
    temp = head;
    while (temp->next != head) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

    // --- Step 2: Insert a node at the end ---
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 40;

    temp = head;
    while (temp->next != head)
        temp = temp->next; // move to last node

    temp->next = newNode;
    newNode->next = head; // make circular

    printf("\nAfter Insertion at End:\n");
    temp = head;
    while (temp->next != head) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

    // --- Step 3: Delete a node from the end ---
    struct Node* prev = NULL;
    temp = head;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head; // second last node points to head
    free(temp);        // delete last node

    printf("\nAfter Deletion at End:\n");
    temp = head;
    while (temp->next != head) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

    return 0;
}

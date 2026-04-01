#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create 4 nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    // Link nodes to make circular
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;  // last node points back to head

    // Display list using while loop
    printf("Circular Linked List elements:\n");
    struct Node* temp = head;

    while (temp->next != head) {   // stop before returning to head
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);  // print last node

    printf("\n");

    return 0;
}

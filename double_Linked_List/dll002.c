#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {          // Empty list
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {  // Go to last node
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from end
void deleteEnd(struct Node** head) {
    if (*head == NULL) {          // Empty list
        printf("List empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == NULL) {     // Only one node
        printf("Deleted: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL) {  // Go to last node
        temp = temp->next;
    }
    printf("Deleted: %d\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

// Display forward
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("List: ");
    display(head);

    deleteEnd(&head);
    printf("List after deletion: ");
    display(head);

    return 0;
}

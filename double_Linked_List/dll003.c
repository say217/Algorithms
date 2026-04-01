#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
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
void insert_at_end(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from end
void delete_at_end(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty\n");
        return;
    }

    struct Node* temp = *head;
    if (temp->next == NULL) { // Only one node
        printf("Deleted from end: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    printf("Deleted from end: %d\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

// ✅ Delete from head
void delete_at_head(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty\n");
        return;
    }

    struct Node* temp = *head;
    printf("Deleted from head: %d\n", temp->data);

    *head = temp->next;   // Move head to next node
    if (*head != NULL) {  
        (*head)->prev = NULL;  // Update new head's prev
    }
    free(temp);
}

// Print list
void print(struct Node* head) {
    while (head != NULL) {
        printf("%d<->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);

    printf("List: ");
    print(head);

    delete_at_head(&head);
    printf("After deleting head: ");
    print(head);

    delete_at_end(&head);
    printf("After deleting end: ");
    print(head);

    delete_at_head(&head);
    printf("After deleting head again: ");
    print(head);

    return 0;
}

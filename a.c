

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};


// Function to create a new node
struct Node* create_node(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Insert at head
void insert_at_head(struct Node** head, int data) {
    struct Node* new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

// Delete at head
void delete_at_head(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Print list
void print_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    // Create initial list
    insert_at_head(&head, 10);
    insert_at_head(&head, 20);
    insert_at_head(&head, 30);
    printf("Initial list:\n");
    print_list(head);

    // Perform operations
    printf("\nInsert 40 at head:\n");
    insert_at_head(&head, 40);
    print_list(head);

    printf("\nDelete at head:\n");
    delete_at_head(&head);
    print_list(head);

    printf("\nInsert 50 at head:\n");
    insert_at_head(&head, 50);
    print_list(head);

    printf("\nDelete at head:\n");
    delete_at_head(&head);
    print_list(head);

    return 0;
}



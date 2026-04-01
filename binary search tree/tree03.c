#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Insert a node in BST

// Search a node in BST
int search(struct Node* root, int key) {
    if (root == NULL) return 0; // not found
    if (root->data == key) return 1; // found
    if (key < root->data) return search(root->left, key);
    else return search(root->right, key);
}

// Inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    // Search for elements
    int key1 = 30;
    int key2 = 25;

    if (search(root, key1))
        printf("%d found in BST.\n", key1);
    else
        printf("%d not found in BST.\n", key1);

    if (search(root, key2))
        printf("%d found in BST.\n", key2);
    else
        printf("%d not found in BST.\n", key2);

    return 0;
}

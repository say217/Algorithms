
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to search and print position of the element
int searchWithPosition(struct Node* root, int key, char path[]) {
    if (root == NULL)
        return 0; // Not found

    // Check current node
    if (root->data == key) {
        printf("Element %d found at position: %s\n", key, path);
        return 1;
    }

    // Search in the left subtree
    char leftPath[100];
    strcpy(leftPath, path);
    strcat(leftPath, " -> Left");
    if (searchWithPosition(root->left, key, leftPath))
        return 1;

    // Search in the right subtree
    char rightPath[100];
    strcpy(rightPath, path);
    strcat(rightPath, " -> Right");
    if (searchWithPosition(root->right, key, rightPath))
        return 1;

    return 0;
}

int main() {
    // Create a simple binary tree
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(12);
    root->right->right = createNode(18);

    printf("Inorder Traversal: ");
    inorder(root);

    int key;
    printf("\n\nEnter element to search: ");
    scanf("%d", &key);

    char startPath[10] = "Root";
    if (!searchWithPosition(root, key, startPath))
        printf("Element %d not found in the tree.\n", key);

    return 0;
}

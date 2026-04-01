 //Write a function to count the number of leaf nodes.
//8. Write a function to count the number of internal (non-leaf

#include <stdio.h>
#include <stdlib.h>

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

// Function to count the number of leaf nodes
int countLeafNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;  // It's a leaf node
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

// Function to count the number of internal (non-leaf) nodes
int countInternalNodes(struct Node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;  // Not an internal node
    return 1 + countInternalNodes(root->left) + countInternalNodes(root->right);
}

// Inorder traversal (for display)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
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

    int leafCount = countLeafNodes(root);
    int internalCount = countInternalNodes(root);

    printf("\n\nNumber of leaf nodes: %d", leafCount);
    printf("\nNumber of internal (non-leaf) nodes: %d\n", internalCount);

    return 0;
}

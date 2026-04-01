
//Write a function to count the total number of nodes in a binary tree.
#include <stdio.h>
#include <stdlib.h>

// Define a node
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

// Function to count total nodes in a binary tree
int countNodes(struct Node* root) {
    if (root == NULL) {
        return 0;  // Base case: empty tree
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    // Create a sample binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Count total nodes
    int totalNodes = countNodes(root);
    printf("Total number of nodes: %d\n", totalNodes);

    return 0;
}

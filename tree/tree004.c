#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to calculate height of binary tree
int height(struct Node* root) {
    if (root == NULL) {
        return 0;  // Empty tree has height 0
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}
// Function to calculate sum of all nodesleft
int sumOfNodes(struct Node* root) {
    if (root == NULL) {
        return 0;  // Empty tree has sum 0
    }
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Height of tree: %d\n", height(root));
    printf("Sum of all nodes: %d\n", sumOfNodes(root));

    return 0;
}

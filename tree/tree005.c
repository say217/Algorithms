// invert a binary tree 
#include <stdio.h>
#include <stdlib.h>

// Define a Node
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

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to invert (mirror) the binary tree
struct Node* invertTree(struct Node* root) {
    if (root == NULL)
        return NULL;

    // Swap the left and right subtrees
    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively invert left and right subtrees
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

int main() {
    // Create nodes
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal before inversion: ");
    inorder(root);

    // Invert the tree
    invertTree(root);

    printf("\nInorder traversal after inversion: ");
    inorder(root);
    printf("\n");

    return 0;
}

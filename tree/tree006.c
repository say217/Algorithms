

// search an elemnt 

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

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to search for an element in the binary tree
int search(struct Node* root, int key) {
    if (root == NULL)
        return 0; // Not found
    if (root->data == key)
        return 1; // Found

    // Search in left or right subtree
    if (search(root->left, key))
        return 1;
    if (search(root->right, key))
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

    if (search(root, key))
        printf("Element %d found in the tree!\n", key);
    else
        printf("Element %d not found in the tree.\n", key);

    return 0;
}



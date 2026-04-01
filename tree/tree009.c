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

// Function to find the height (or depth) of a binary tree
int findHeight(struct Node* root) {
    if (root == NULL)
        return 0;  // Empty tree has height 0

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    // Height of tree = 1 + max(left height, right height)
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

// Inorder traversal (for checking tree)
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
    root->right->right = createNode(18);

    printf("Inorder Traversal: ");
    inorder(root);

    int height = findHeight(root);
    printf("\n\nHeight (Depth) of the tree: %d\n", height);

    return 0;
}







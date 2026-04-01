
//insert new node

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
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert node at first empty position (left -> right)
int insert(struct Node* root, int data) {
    if (root == NULL) return 0;

    // Insert in left if empty
    if (root->left == NULL) {
        root->left = createNode(data);
        return 1;   // success
    }

    // Insert in right if empty
    if (root->right == NULL) {
        root->right = createNode(data);
        return 1;   // success
    }

    // Try left subtree
    if (insert(root->left, data))
        return 1;

    // Try right subtree
    return insert(root->right, data);
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
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder before insertion: ");
    inorder(root);
    printf("\n");

    // Insert new element
    insert(root, 6);

    printf("Inorder after insertion: ");
    inorder(root);
    printf("\n");

    return 0;
}

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
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) return createNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}

// Find minimum value node
struct Node* findMin(struct Node* root) {
    while (root->left != NULL){
     root = root->left;
    }
     return root;
}

// Delete a node in BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data){

     root->right = deleteNode(root->right, key);
}
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        } else {
            struct Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
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
    // Manually create BST root
    struct Node* root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);

    printf("Inorder before insertion: ");
    inorder(root);
    printf("\n");

    // Insert one element
    root = insert(root, 60);
    printf("Inorder after inserting 60: ");
    inorder(root);
    printf("\n");

    // Delete one element
    root = deleteNode(root, 30);
    printf("Inorder after deleting 30: ");
    inorder(root);
    printf("\n");

    return 0;
}


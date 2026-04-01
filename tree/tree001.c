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

int main() {
    // Create nodes
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    return 0;


}
int main() {
    struct Node* root;
    int a, b, c, d, e;

    // Take user input for each node
    printf("Enter value for root node: ");
    scanf("%d", &a);
    root = createNode(a);

    printf("Enter value for left child of root: ");
    scanf("%d", &b);
    root->left = createNode(b);

    printf("Enter value for right child of root: ");
    scanf("%d", &c);
    root->right = createNode(c);

    printf("Enter value for left child of node %d: ", b);
    scanf("%d", &d);
    root->left->left = createNode(d);

    printf("Enter value for right child of node %d: ", b);
    scanf("%d", &e);
    root->left->right = createNode(e);

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\n");

    return 0;
}










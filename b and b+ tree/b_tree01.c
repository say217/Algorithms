#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Maximum keys in a node
#define MIN 1  // Minimum keys in a node

// B-Tree node structure
struct BTreeNode {
    int keys[MAX];
    int count;                 // Number of keys
    struct BTreeNode* children[MAX+1];
    int leaf;                  // 1 if leaf, 0 if not
};

// Create a new node
struct BTreeNode* createNode(int leaf) {
    struct BTreeNode* node = (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    node->leaf = leaf;
    node->count = 0;
    for(int i=0; i<MAX+1; i++) node->children[i] = NULL;
    return node;
}

// Simple function to print a node (for demo)
void printNode(struct BTreeNode* node) {
    if(node) {
        for(int i=0; i<node->count; i++)
            printf("%d ", node->keys[i]);
        printf("\n");
    }
}

// Main function
int main() {
    // Create a root node (leaf = 1)
    struct BTreeNode* root = createNode(1);

    // For simplicity, just manually insert keys
    root->keys[0] = 10;
    root->keys[1] = 20;
    root->count = 2;

    printf("B-Tree root keys: ");
    printNode(root);

    return 0;
}

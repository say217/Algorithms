



// sequential representation
#include <stdio.h>

#define MAX 100

// Function to print inorder traversal (using array)
void inorder(int tree[], int index, int n) {
    if (index >= n) return;

    inorder(tree, 2 * index + 1, n);  // left
    printf("%d ", tree[index]);       // root
    inorder(tree, 2 * index + 2, n);  // right
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;  // total nodes

    printf("Inorder traversal (array representation): ");
    inorder(tree, 0, n);
    printf("\n");

    return 0;
}
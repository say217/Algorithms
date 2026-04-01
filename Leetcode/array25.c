//TODO - Rotate image roatte matrix at 90 deg



#include <stdio.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}

// Example usage
int main() {
    int n = 3;
    int data[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Convert 2D array to array of pointers for the function
    int* matrix[3];
    for (int i = 0; i < n; i++) matrix[i] = data[i];
    
    rotate(matrix, n, NULL);
    
    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}




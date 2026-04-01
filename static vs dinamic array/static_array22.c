








#include <stdio.h>

#define N 4  // Matrix size

void rotate180(int matrix[N][N]) {
    // Swap elements with their 180-degree counterparts
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[N - 1 - i][N - 1 - j];
            matrix[N - 1 - i][N - 1 - j] = temp;
        }
    }

    // If N is odd, handle the middle row by reversing it
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotate180(matrix);

    printf("\nMatrix after 180 degree rotation:\n");
    printMatrix(matrix);

    return 0;
}











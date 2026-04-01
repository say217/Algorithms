#include <stdio.h>

#define N 4  // Matrix size

void rotate90CounterClockwise(int matrix[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each column
    for (int j = 0; j < N; j++){
        for (int i = 0; i < N / 2; i++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[N - 1 - i][j];
            matrix[N - 1 - i][j] = temp;
        }
    }
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

    rotate90CounterClockwise(matrix);

    printf("\nMatrix after 270 degree rotation (90 CCW):\n");
    printMatrix(matrix);

    return 0;
}




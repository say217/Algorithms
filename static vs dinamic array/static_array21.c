




#include <stdio.h>

#define N 4  // Change N to your matrix size

void rotate90Clockwise(int matrix[N][N]) {
    // To rotate by 90 degrees clockwise:
    // Transpose the matrix, then reverse each row

    // Transpose
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N / 2; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - 1 - j];
            matrix[i][N - 1 - j] = temp;
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

    rotate90Clockwise(matrix);

    printf("\nMatrix after 90 degree rotation clockwise:\n");
    printMatrix(matrix);

    return 0;
}






















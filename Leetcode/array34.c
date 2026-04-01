//Todo diagonal traverse of matrix



#include <stdio.h>

void diagonalTraverse(int mat[][100], int r, int c) {
    for (int d = 0; d < r + c - 1; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c)
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int mat[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalTraverse(mat, 3, 3);
    return 0;
}



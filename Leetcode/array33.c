//Todo sort matrix diagolaly



#include <stdio.h>
#include <stdlib.h>

// Comparator for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void diagonalSort(int mat[][100], int rows, int cols) {
    int temp[100];
    int r, c, k;

    // Diagonals starting from first column
    for (int startRow = 0; startRow < rows; startRow++) {
        r = startRow;
        c = 0;
        k = 0;

        while (r < rows && c < cols)
            temp[k++] = mat[r++][c++];

        qsort(temp, k, sizeof(int), compare);

        r = startRow;
        c = 0;
        k = 0;

        while (r < rows && c < cols)
            mat[r++][c++] = temp[k++];
    }

    // Diagonals starting from first row (skip first element)
    for (int startCol = 1; startCol < cols; startCol++) {
        r = 0;
        c = startCol;
        k = 0;

        while (r < rows && c < cols)
            temp[k++] = mat[r++][c++];

        qsort(temp, k, sizeof(int), compare);

        r = 0;
        c = startCol;
        k = 0;

        while (r < rows && c < cols)
            mat[r++][c++] = temp[k++];
    }
}
int main() {
    int mat[100][100] = {
        {3, 3, 1},
        {2, 2, 1},
        {1, 1, 1}
    };

    int rows = 3, cols = 3;

    diagonalSort(mat, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}

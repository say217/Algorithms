//Todo sort a matrix
/* Input:

3 1 4
9 2 6


Output:

1 2 3
4 6 9
*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int mat[3][3] = {{3, 1, 4}, {9, 2, 6}, {5, 8, 7}};
    int r = 3, c = 3;
    int temp[3];

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            temp[i] = mat[i][j];

        qsort(temp, r, sizeof(int), cmp);

        for (int i = 0; i < r; i++)
            mat[i][j] = temp[i];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}





/*!SECTION#include <stdio.h>

int main() {
    int a[2][2] = {{3, 1}, {4, 2}};
    int r = 2, c = 2;
    int temp;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int x = 0; x < r; x++) {
                for (int y = 0; y < c; y++) {
                    if (a[i][j] < a[x][y]) {
                        temp = a[i][j];
                        a[i][j] = a[x][y];
                        a[x][y] = temp;
                    }
                }
            }
        }
    }

    // Print sorted matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
*/



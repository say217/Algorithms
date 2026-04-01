#include <stdio.h>

// Sort the 2D array in-place without flattening
void sortMatrix(int arr[3][4], int rows, int cols) {
    for(int i = 0; i < rows * cols - 1; i++) {
        for(int j = i + 1; j < rows * cols; j++) {
            int row1 = i / cols, col1 = i % cols;
            int row2 = j / cols, col2 = j % cols;
            if(arr[row1][col1] > arr[row2][col2]) {
                int temp = arr[row1][col1];
                arr[row1][col1] = arr[row2][col2];
                arr[row2][col2] = temp;
            }
        }
    }
}

int main() {
    int arr[3][4] = {
        {4, 3, 2, 1},
        {8, 7, 6, 5},
        {12, 11, 10, 9}
    };

    printf("Original matrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    sortMatrix(arr, 3, 4);

    printf("\nMatrix after sorting all elements:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
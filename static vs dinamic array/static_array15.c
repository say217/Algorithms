//! Concat two array


#include <stdio.h>

void concatenateArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i, j;

    // Copy elements of arr1 to result
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }

    // Copy elements of arr2 to result
    for (j = 0; j < n2; j++) {
        result[i + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[n1 + n2];

    concatenateArrays(arr1, n1, arr2, n2, result);

    printf("Concatenated array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

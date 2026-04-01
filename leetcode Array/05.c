// 	• Remove Duplicates from Sorted Array (LC 26)
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[100];  // temporary array
    int k = 0;

    // Compare each element with the next one
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[k++] = arr[i];
        }
    }

    // Print result
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}


/* ⏱️ Complexity

Time Complexity: O(n) → Single pass through the array

Space Complexity: O(1) → In-place, no extra arrays*/
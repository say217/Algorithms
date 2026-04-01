// ! Left rotate an array
#include <stdio.h>

void leftRotateByK(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k > n
    int temp[k];

    // Store first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the elements to the front
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy back the k elements to the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    leftRotateByK(arr, n, k);

    printf("Array after left rotation by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// ! Right Rotation

#include <stdio.h>

void rightRotateByK(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k > n
    int temp[k];

    // Store last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the elements to the right
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // Copy back the k elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rightRotateByK(arr, n, k);

    printf("Array after right rotation by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

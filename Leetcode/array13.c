//Recursive Binary Search Code in C
#include <stdio.h>

// Recursive Binary Search Function
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;   // base case (not found)

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {1, 2, 3, 4, 9, 78};  // sorted array
    int key = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
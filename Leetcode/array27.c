// Todo Exponential search


#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int x) {
    if (arr[0] == x) return 0;

    int i = 1;
    while (i < n && arr[i] <= x)
        i = i * 2;

    // Call binary search in the found range
    int low = i/2;
    int high = (i < n) ? i : n-1;
    return binarySearch(arr, low, high, x);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 40;

    int index = exponentialSearch(arr, n, x);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}





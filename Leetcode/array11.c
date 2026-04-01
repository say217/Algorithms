// Simple C Code – First Occurrence



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int key = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n - 1;
    int mid, result = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;      // store index
            high = mid - 1;    // move left
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("First occurrence at index %d\n", result);
    return 0;
}
// Simple C Code – Last Occurrence if it has duplicate array 


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
            result = mid;     // store index
            low = mid + 1;    // move right
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Last occurrence at index %d\n", result);
    return 0;
}

/*
result is initialized to -1 to represent the “not found” state before the search begins.
Why this is necessary

Valid array indices are:
0 to n - 1
So -1 is not a valid index.
It safely means:

“The key has not been found yet.”


arr[n + 1];   // MEMORY CORRUPTION / CRASH
This accesses memory outside the array.
*/

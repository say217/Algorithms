

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate length
    int length = sizeof(arr) / sizeof(arr[0]);

    // Print length
    printf("Length of the array: %d\n", length);

    return 0;
}

// ? sizeof(array) gives the total number of bytes occupied by the array.

// ? sizeof(array[0]) gives the number of bytes of a single element.
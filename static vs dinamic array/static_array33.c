

#include <stdio.h>

#define SIZE 100   // maximum array size

int main() {
    int arr[SIZE];
    int n, i, newElement;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insert at the end
    printf("Enter new element to insert at the end: ");
    scanf("%d", &newElement);

    if (n < SIZE) {
        arr[n] = newElement;  // place new element at last index
        n++;
    } else {
        printf("Array is full, cannot insert!\n");
    }

    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Delete from the end
    if (n > 0) {
        n--;  // just reduce size
    } else {
        printf("\nArray is empty, cannot delete!\n");
    }

    printf("\nArray after deletion from end: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

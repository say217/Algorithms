
//insert  AND DELETE AT BGINGIG
#include <stdio.h>

#define SIZE 100   // maximum size of array

int main() {
    int arr[SIZE];
    int n, i, newElement;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insert at beginning
    printf("Enter new element to insert at beginning: ");
    scanf("%d", &newElement);

    // Shift elements to right
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newElement;  // insert new element at 0th index
    n++;

    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Remove from beginning
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("\nArray after deletion from beginning: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

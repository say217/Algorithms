



#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 34, 5, 6};  // initial array
    int n = 5;  // current number of elements
    int element = 99;  // element to insert at the end

    if (n < 10) {  // check if there is space in the array
        arr[n] = element;  // insert at the end
        n++;  // increase size
    } else {
        printf("Array is full!\n");
    }

    // Print array after insertion
    printf("Array after insertion at the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



    if (n > 0) {
        n--;  // just reduce size to delete last element
    } else {
        printf("Array is empty!\n");
    }

    // Print array after deletion
    printf("Array after deletion from the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


















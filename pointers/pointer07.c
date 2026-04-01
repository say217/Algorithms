// Reverse an Array Using Pointers
//Concepts: Pointer arithmetic, swapping via pointers.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *start = arr;
    int *end = arr + size - 1;

    for (; start < end; start++, end--) {
        int temp = *start;
        *start = *end;
        *end = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



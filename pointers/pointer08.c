// max min

#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;
    int max = *ptr;
    int min = *ptr;

    for (int i = 1; i < size; i++) {
        ptr++;  // move to next element

        if (*ptr > max) {
            max = *ptr;
        }
        if (*ptr < min) {
            min = *ptr;
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
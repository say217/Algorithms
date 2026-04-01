// ! Bubble sorting


#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    // Bubble Sort logic
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/* if (arr[j] > arr[j + 1])
If the current element is greater than the next, they are out of order, so we swap them.


temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
This moves the larger element one position to the right.


arr[] = {64, 25, 12}
Pass 1:
Compare 64 and 25 → swap → {25, 64, 12}

Compare 64 and 12 → swap → {25, 12, 64}

Pass 2:
Compare 25 and 12 → swap → {12, 25, 64}

Now the array is sorted.

📌 Summary:
Outer loop controls passes.

Inner loop compares and swaps adjacent elements.

Largest unsorted elements “bubble” to the end in each pass.

After all passes, the array is fully sorted in ascending order.*/
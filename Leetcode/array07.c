// Shell Sort


#include <stdio.h>

int main() {
    int arr[10], n, i, j, gap, temp;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Shell Sort logic
    for (gap = n / 2; gap > 0; gap = gap / 2) {

        for (i = gap; i < n; i++) {
            temp = arr[i];
            j = i;

            // Shift elements until correct position is found
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j = j - gap;
            }

            arr[j] = temp;
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

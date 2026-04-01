#include <stdio.h>

int main() {
    int arr[100], n, k, value;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position & value to insert
    printf("Enter position (1 to %d) to insert at: ", n + 1);
    scanf("%d", &k);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (int i = n; i >= k; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new value
    arr[k - 1] = value;
    n++;

    // Output updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

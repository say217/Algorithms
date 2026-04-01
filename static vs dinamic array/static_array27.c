
// insert at position k

#include <stdio.h>

int main() {
    int arr[100], n, k, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (k): ");
    scanf("%d", &k);

    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = n; i >= k; i--)
        arr[i] = arr[i - 1];  // shift right

    arr[k - 1] = value;  // insert at position k
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

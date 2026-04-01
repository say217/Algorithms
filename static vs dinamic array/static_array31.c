#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key, i, found = 0;

    printf("Original array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) {
        for(int j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];  // shift elements left
        }
        n--;  // reduce size
        printf("Array after deletion: ");
        for(int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Element %d not found in array\n", key);
    }

    return 0;
}










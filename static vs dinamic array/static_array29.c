// linear srech

#include <stdio.h>

int main() {
    int arr[100], n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            return 0;  // exit after first match
        }
    }

    printf("Element %d not found\n", key);
    return 0;
}

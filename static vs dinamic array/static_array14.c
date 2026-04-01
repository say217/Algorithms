#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int* merged = malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    
    // Merge arrays
    while (i < n1 && j < n2) {
        merged[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }
    
    // Copy remaining elements from arr1
    while (i < n1) merged[k++] = arr1[i++];
    
    // Copy remaining elements from arr2
    while (j < n2) merged[k++] = arr2[j++];
    
    // Print merged array
    printf("Merged array: ");
    for (int x = 0; x < n1 + n2; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
    
    free(merged); // Clean up
    return 0;
}

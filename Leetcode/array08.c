#include <stdio.h>

int main() {
    int a[] = {3, 1, 2, 3, 1};
    int n = 5;
    int max = 3;

    // Step 1: Create count array
    int count[4] = {0};   // size = max + 1

    // Step 2: Count occurrences
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    // Step 3: Print sorted elements
    printf("Sorted array: ");
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            printf("%d ", i);
            count[i]--;
        }
    }

    return 0;
}


// ! Find the missing number in a sequence (1 to N).

#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;  // Expected sum of numbers from 1 to N
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  // Missing number is 3
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingNumber(arr, n);
    printf("Missing number is: %d\n", missing);

    return 0;
}

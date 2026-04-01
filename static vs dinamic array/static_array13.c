// ! Find the subarray with a given sum.
#include <stdio.h>

void findSubarrayWithSum(int arr[], int n, int targetSum) {
    int start = 0, sum = 0;

    for (int end = 0; end < n; end++) {
        sum += arr[end];

        while (sum > targetSum) {
            sum -= arr[start];
            start++;
        }

        if (sum == targetSum) {
            printf("Subarray found from index %d to %d\n", start, end);
            return;
        }
    }

    printf("No subarray with the given sum found.\n");
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 33;

    findSubarrayWithSum(arr, n, targetSum);
    return 0;
}



















//The subarray [4, -1, 2, 1] has the largest sum = 6.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];  // start with first element
    int start = 0, end = 0;  // to store subarray indices

    // check all subarrays
    for(int i = 0; i < n; i++) {
        int currentSum = 0;
        for(int j = i; j < n; j++) {
            currentSum += arr[j];

            if(currentSum > maxSum) {
                maxSum = currentSum;
                start = i;
                end = j;
            }
        }
    }

    printf("Maximum subarray sum = %d\n", maxSum);
    printf("Subarray: ");
    for(int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*Complexity

Time Complexity: O(n) → Single pass.

Space Complexity: O(1) → Only two variables used.*/
// remove elements 

#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (nums[i] == val) {
            for (j = i; j < n - 1; j++) {
                nums[j] = nums[j + 1];   // shift left
            }
            n--;   // reduce size
            i--;   // check same index again
        }
    }
    return n;  // new length
}

int main() {
    int nums[] = {3, 2, 2, 3, 4, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 2;

    int newLen = removeElement(nums, n, val);

    printf("New length: %d\n", newLen);
    printf("Modified array: ");
    for (int i = 0; i < newLen; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}

// moves zeros 
#include <stdio.h>

void moveZeroes(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            for (int j = i; j < n - 1; j++) {
                nums[j] = nums[j + 1];   // shift left
            }
            nums[n - 1] = 0;  // last becomes zero
        }
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, n);

    printf("After moving zeroes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

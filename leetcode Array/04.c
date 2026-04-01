// Problem: Merge Sorted Array (LC 88)
#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1; // Last index of nums1 elements
    int j = n - 1; // Last index of nums2
    int k = m + n - 1; // Last index of merged array

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Copy remaining elements from nums2 if any
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int nums1[9] = {1,2,3,0,0,0,0,0,0};
    int nums2[] = {2,5,6,7,8};
    int m = 3, n = 5;

    merge(nums1, m, nums2, n);

    printf("Merged Array: ");
    for(int i = 0; i < m + n; i++)
        printf("%d ", nums1[i]);
    printf("\n");

    return 0;
}


/* ⏱️ Complexity

Time Complexity: O(m + n) → Each element is processed once.

Space Complexity: O(1) → Merging done in-place, no extra arrays.*/
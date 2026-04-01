//TODO - simple 3 sum closeest in an array effcient approcach 



#include <stdio.h>
#include <stdlib.h>

int main() {
    // Sorted array
    int arr[] = {-4, -1, 1, 2};
    int target = 1;
    int n = sizeof(arr) / sizeof(arr[0]);

    int closest = arr[0] + arr[1] + arr[2];

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (abs(sum - target) < abs(closest - target))
                closest = sum;

            if (sum < target)
                left++;
            else
                right--;
        }
    }

    printf("Closest sum = %d\n", closest);
    return 0;
}







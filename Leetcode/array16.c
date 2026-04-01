
//Todo 2 Sum  o(n) time complexity
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Indexes: %d and %d\n", left, right);
            printf("Values: %d and %d\n", arr[left], arr[right]);
            return 0;
        }
        else if (sum < target) {
            left++;   // need bigger sum
        }
        else {
            right--;  // need smaller sum
        }
    }

    printf("No pair found\n");
    return 0;
}


/*!SECTION#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Indexes: %d and %d | Values: %d and %d\n",
                   left, right, arr[left], arr[right]);

            found = 1;
            left++;    // move both pointers
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    if (!found) {
        printf("No pair found\n");
    }

    return 0;
}
*/
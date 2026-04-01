// ! ind the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int arr[] = {15, 42, 7, 89, 23, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}




/* This starts a loop from the second element (i = 1) to the last.

We skip i = 0 because we already initialized both max and min with arr[0].

2. if (arr[i] > max)
Checks if the current element is greater than the current maximum.

If it is, update max with this new value:


max = arr[i];

3. if (arr[i] < min)
Checks if the current element is less than the current minimum.

If it is, update min with this new value:


min = arr[i];
🔄 Example:
Suppose arr[] = {15, 42, 7, 89, 23, 5}, and initially:

max = 15

min = 15

During the loop:

arr[1] = 42 → max updated to 42

arr[2] = 7 → min updated to 7

arr[3] = 89 → max updated to 89

arr[5] = 5 → min updated to 5

Final result:

max = 89

min = 5

*/
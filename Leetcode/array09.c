// linear Search



#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 78, 9, 1};
    int key = 78;   // element to search
    int i, n;

    n = sizeof(arr) / sizeof(arr[0]);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}

/*!SECTION
Time & Space Complexity
Case	Time
Best	O(1)
Average	O(n)
Worst	O(n)


*/

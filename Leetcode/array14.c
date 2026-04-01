// Descending Binary Search
#include <stdio.h>

int main() {
    int arr[] = {78, 50, 20, 10, 5, 2};  // descending order
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (key < arr[mid]) {
            low = mid + 1;   // move right
        }
        else {
            high = mid - 1;  // move left
        }
    }

    printf("Element not found\n");
    return 0;
}



/*!SECTION
Exponential serach


#include <stdio.h>

// Binary Search used by Exponential Search
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Exponential Search
int exponentialSearch(int arr[], int n, int key)
{
    if (arr[0] == key)
        return 0;

    int i = 1;
    while (i < n && arr[i] <= key)
        i = i * 2;

    return binarySearch(arr, i / 2, (i < n ? i : n - 1), key);
}

int main()
{
    int arr[] = {3, 7, 12, 18, 25, 40, 55, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = exponentialSearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");

    return 0;
}

*/
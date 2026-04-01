// TODO second largest and second smallest


#include <stdio.h>

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    // Sort the array in ascending order
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Second largest will be the second last element after sorting
    printf("Second largest element is: %d\n", arr[n-2]);
}

void findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    // Sort the array in ascending order
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Second smallest will be the second element after sorting
    printf("Second smallest element is: %d\n", arr[1]);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, n); // Find second largest element
    findSecondSmallest(arr, n); // Find second smallest element

    return 0;
}






//!  Split Two array



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  // Original array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the original array
    
    int n1 = n / 2;  // Size of the first half
    int n2 = n - n1;  // Size of the second half
    
    int arr1[n1];  // First array
    int arr2[n2];  // Second array
    
    // Split the original array into two halves
    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[i];  // Copy the first half
    }

    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[n1 + i];  // Copy the second half
    }

    // Display the first array
    printf("First array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Display the second array
    printf("Second array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}



/*



 Advanced Logic Building Questions
Find the missing number in a sequence (1 to N).

Find the majority element in an array (if exists).

Find the subarray with a given sum.

Implement linear search and binary search on a static array.

Write a program to merge two sorted static arrays.     add more advance problems   */
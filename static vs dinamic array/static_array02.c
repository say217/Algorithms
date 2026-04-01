// * Reverse an array


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse the array in place
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



/* 
c
Copy
Edit
int temp = arr[i];
Saves the value at arr[i] into a temporary variable.
For i = 0, this means:

c
Copy
Edit
temp = 10;
🟦 Line 2:
c
Copy
Edit
arr[i] = arr[n - 1 - i];
Overwrites arr[i] with the value from the end of the array.
For i = 0, this means:

arr[0] = arr[4]; // arr[0] becomes 50
🟦 Line 3:

arr[n - 1 - i] = temp;
Puts the original value of arr[i] (which was saved in temp) into the opposite end.



arr[4] = temp; // arr[4] becomes 10
📌 After swapping:
The array becomes:

{50, 20, 30, 40, 10}
This continues for i = 0 to n/2 - 1, effectively reversing the array.*/
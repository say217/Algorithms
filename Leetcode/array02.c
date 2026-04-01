
// insertion sort



#include <stdio.h>

int main() {
    int arr[100], n, i, j, key;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort Algorithm
    for(i = 1; i < n; i++) {
        key = arr[i];      // Element to be placed
        j = i - 1;

        // Move elements greater than key to one position ahead
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // Place key in correct position
    }

    // Print sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





/*!SECTION1. What is Insertion Sort?

Answer:
Insertion Sort is a comparison-based sorting algorithm that builds the final sorted array one element at a 
time by inserting each element into its correct position in the already sorted part of the array.

2. Why does insertion sort start from index 1?

Answer:
A single element is always considered sorted.
So the first element at index 0 is treated as sorted, and insertion begins from index 1.


Explain this line:
arr[j + 1] = arr[j];


Answer:
It shifts the element at index j one position to the right to create space for
 inserting the key in its correct position.


 4. What is the purpose of key?

Answer:
key stores the current element that must be placed into the correct position inside the sorted subarray.


5. Why do we use j--?

Answer:
To move left in the sorted subarray and compare the key with previous elements until the correct position is found.

8. Is Insertion Sort stable?

Answer:
Yes. It does not change the relative order of equal elements.

9. Is Insertion Sort in-place?

Answer:
Yes. It requires only constant extra memory O(1).


10. When should you use Insertion Sort?

Answer:

When the dataset is small

When the data is almost sorted


11. What is the major disadvantage?

Answer:
It becomes extremely slow for large datasets due to O(n²) time complexity.

12. What happens if the array is reverse sorted?

Answer:
Every element is shifted across the entire array — this gives worst case time O(n²).



14. Can insertion sort be used in real-time systems?

Answer:
Yes, for small real-time datasets because of its low memory footprint and predictable behavior.


| Case                   | Time Complexity |
| ---------------------- | --------------- |
| Best (already sorted)  | O(n)            |
| Average                | O(n²)           |
| Worst (reverse sorted) | O(n²)           |



*/


























































































































































































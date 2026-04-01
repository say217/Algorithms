#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 9, 78};  // sorted array
    int key = 78;
    int low = 0, high, mid;
    int n = sizeof(arr) / sizeof(arr[0]);

    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Element not found\n");
    return 0;
}

/*!SECTIONTime & Space Complexity
Case	Time
Best	O(1)
Average	O(log n)
Worst	O(log n)
1. What is Binary Search?

Answer:
Binary Search is an efficient searching algorithm that finds an element in a sorted array by repeatedly dividing the search range into half.

2. What is the prerequisite for Binary Search?

Answer:
The array must be sorted.

3. What is the time complexity?
Case	Complexity
Best	O(1)
Average	O(log n)
Worst	O(log n)
4. What is the space complexity?

Answer:
O(1) for iterative version, O(log n) for recursive version.

5. Why is Binary Search faster than Linear Search?

Answer:
Because Binary Search eliminates half of the remaining elements in each step.

6. What is the base condition in Binary Search?

Answer:
When low > high, the search stops and the element is not present.

7. What happens if Binary Search is applied on an unsorted array?

Answer:
The result will be incorrect or unpredictable.

8. How do you calculate the mid index safely?

Answer:

mid = low + (high - low) / 2;

Prevents integer overflow

9. Difference between recursive and iterative Binary Search?
Recursive	Iterative
Uses function calls	Uses loop
Uses extra stack memory	No extra memory
Simpler logic	Faster and safer
10. Why is Binary Search not suitable for Linked Lists?

Answer:
Because linked lists do not support random access to middle elements.

11. Can Binary Search be used for descending sorted array?

Answer:
Yes, but comparison conditions must be reversed.

12. What is the worst case scenario?

Answer:
When the element is not present in the array.

13. What is exponential search?

Answer:
An algorithm that first finds the range where the element exists and then applies Binary Search.

14. What is the maximum number of comparisons?

Answer:
log2(n) comparisons.

15. What are the real-life uses?

Answer:
Database indexing, dictionary lookup, library catalog systems.



*/


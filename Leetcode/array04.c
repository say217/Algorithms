#include <stdio.h>

// Function to merge two sorted halves
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];
}

// Recursive merge sort function
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {8, 3, 5, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);


    
    printf("Array : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nSorted Array using merge sort:\n ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}


/*!SECTION


1. What is Merge Sort?

Answer:
Merge Sort is a divide-and-conquer sorting algorithm that recursively splits the array into halves, 
sorts each half, and then merges the sorted halves. It guarantees O(n log n) time complexity in all cases.

2. Why is Merge Sort called a stable algorithm?

Answer:
Because when two equal elements are compared, the one from the left sub-array is copied first, preserving the original order.

if(arr[i] <= arr[j])   // <= ensures stability

3. What are the time complexities of Merge Sort?
Case	Complexity
Best	O(n log n)
Average	O(n log n)
Worst	O(n log n)
4. What is the space complexity?

Answer:
O(n) due to the temporary array used during merging.

5. Why do we use mid = (low + high) / 2?

Answer:
To divide the array into two equal halves so that recursion depth remains balanced.

6. What is the base condition in Merge Sort?
if(low < high)


Answer:
Stops recursion when only one element is left.

7. Why is k initialized to 0 in merge?

Answer:
Because temp[] starts from index 0, regardless of low.

8. Why do we copy remaining elements after the main while loop?

Answer:
Because once one sub-array finishes, the other may still contain unprocessed sorted elements.

9. Why is Merge Sort preferred over Quick Sort for linked lists?

Answer:
Merge Sort does not require random access and does not suffer from worst-case O(n²).

10. Why is Merge Sort not in-place?

Answer:
Because it requires an auxiliary temporary array for merging.

11. What happens if we replace <= with <?

Answer:
It becomes unstable, changing relative order of equal elements.

12. Why is Merge Sort good for external sorting?

Answer:
Because it processes data in sequential chunks which is efficient for disk-based operations.

13. What is the maximum recursion depth?

Answer:
O(log n) due to halving of the array at each recursion.

14. Where does the actual sorting occur?

Answer:
Inside the merge() function.

15. When should Merge Sort be avoided?

Answer:
When memory is limited, because it requires O(n) extra space.

*/



/*!SECTION8 3 5 2 9 4
Step 1 — Divide the array recursively
Merge Sort first breaks the array until each part has only one element.

less
Copy code
[8 3 5 2 9 4]
        |
---------------------
[8 3 5]       [2 9 4]
   |               |
---------       ---------
[8] [3 5]      [2] [9 4]
         |               |
       -----           -----
      [3] [5]        [9] [4]
Now each sub-array has 1 element, which is already sorted.

Step 2 — Start merging sorted parts
Merge [3] and [5]

Compare 3 and 5 → 3 is smaller → [3]
Remaining → [5]

Result → [3 5]
Merge [8] and [3 5]

Compare 8 and 3 → take 3
Compare 8 and 5 → take 5
Remaining → 8

Result → [3 5 8]

Merge [9] and [4]

Compare 9 and 4 → take 4
Remaining → 9

Result → [4 9]
Merge [2] and [4 9]

Compare 2 and 4 → take 2
Remaining → 4, 9

Result → [2 4 9]
Step 3 — Final merge
Merge [3 5 8] and [2 4 9]

Compare	Take	Result
3 vs 2	2	2
3 vs 4	3	2 3
5 vs 4	4	2 3 4
5 vs 9	5	2 3 4 5
8 vs 9	8	2 3 4 5 8
Remaining	9	2 3 4 5 8 9

Final Sorted Array

2 3 4 5 8 9






2. merge() – combine two sorted halves
void merge(int arr[], int low, int mid, int high)


Merges:

Left part → arr[low … mid]

Right part → arr[mid+1 … high]

Variables
int i = low, j = mid + 1, k = 0;
int temp[100];

Variable	Purpose
i	index for left sub-array
j	index for right sub-array
k	index for temp array
temp	stores merged sorted values
Compare and store smaller values


while (i <= mid && j <= high)
{
    if (arr[i] <= arr[j])
        temp[k++] = arr[i++];
    else
        temp[k++] = arr[j++];
}


Compares elements of both halves

Smaller element is copied to temp[]

Copy remaining elements
while (i <= mid)
    temp[k++] = arr[i++];

while (j <= high)
    temp[k++] = arr[j++];


If one half finishes, remaining elements of the other half are copied.

Copy back to original array
for (i = low, k = 0; i <= high; i++, k++)
    arr[i] = temp[k];


Overwrites original part with sorted values.

3. mergeSort() – divide the array
void mergeSort(int arr[], int low, int high)

Base condition
if (low < high)


Stops when there is only one element.

Find middle
int mid = (low + high) / 2;

Recursive sorting
mergeSort(arr, low, mid);
mergeSort(arr, mid + 1, high);


Sorts both halves.

Merge sorted halves
merge(arr, low, mid, high);
*/











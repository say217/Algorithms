#include <stdio.h>


// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low >= high) return; // Base case: 0 or 1 element

    int pivot = arr[high]; // Choose pivot as last element
    int i = low - 1;       // Index of smaller element

    // Partitioning
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i = i + 1;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place pivot in correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    int pi = i + 1; // Pivot index

    // Recursive calls
    quickSort(arr, low, pi - 1);  // Sort left part
    quickSort(arr, pi + 1, high); // Sort right part
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}



//Todo Pivot at first element
/*!SECTION

#include <stdio.h>

// Hoare Partition
int partition(int arr[], int low, int high) {
    int pivot = arr[low];   // Pivot = first element
    int i = low - 1;
    int j = high + 1;

    while (1) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Quick Sort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quicksort(arr, low, p);
        quicksort(arr, p + 1, high);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


*/


/*!SECTION
//Todo Pivot at any point




#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[low + (high - low) / 2];  // manual pivot
    int i = low - 1;
    int j = high + 1;

    while (1) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}



*/





/*!SECTION

why i = low - 1
i = low - 1 because before scanning starts, there are zero elements smaller than the pivot.
So the “smaller-than-pivot” region is empty, and its last index must be just before low.


Why is Quick Sort called a divide-and-conquer algorithm?

Answer:
Because it divides the array into two subarrays around a pivot and recursively sorts both parts.


3. Why does worst case occur in your code?

Answer:
Because the pivot is always chosen as the last element. If the array is already sorted, partitions become unbalanced.



4. Why is Quick Sort faster than Merge Sort in practice?

Answer:

In-place sorting
Better cache locality



5. What is the space complexity?

Answer:
O(log n) for recursion stack (average case).

6. Is Quick Sort stable?

Answer:
No. Relative order of equal elements is not preserved.


7. Why do we write i = low - 1?

Answer:
It represents that initially no elements are confirmed smaller than pivot.


10. How can worst-case be avoided?

Answer:
Use Randomized pivot


*/
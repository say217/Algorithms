 //  ! Check Duplicate elimant

 #include <stdio.h>

int main() {
    int arr[] = {12, 15, 12, 20, 25, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Loop through the array
    int i, j, k = 0;
    
    // Traverse each element of the array
    for (i = 0; i < n; i++) {
        // Check if the element arr[i] is a duplicate
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;  // If it's a duplicate, break the inner loop
            }
        }
        // If it's not a duplicate, place it at the k-th index
        if (j == i) {
            arr[k] = arr[i];
            k++;
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/* 
2. Outer Loop:

for (i = 0; i < n; i++) {
    Check for duplicates of arr[i] in previous elements
}
This loop goes through every element in the array from the first to the last.

i represents the index of the current element we are examining.

3. Inner Loop:

for (j = 0; j < i; j++) {
    if (arr[i] == arr[j]) {
        break;  // arr[i] is a duplicate, no need to check further
    }
}
This inner loop compares arr[i] (the current element) with every element before it (i.e., from index 0 to i-1).

If any previous element matches arr[i], it means arr[i] is a duplicate and we break out of the inner loop.

The break ensures we don't keep checking the rest of the elements if we already found a match (duplicate).

4. If No Duplicate is Found:
c
Copy
Edit
if (j == i) {
    arr[k] = arr[i];
    k++;
}
If the inner loop completes and arr[i] wasn't found to be a duplicate (meaning j == i), we copy arr[i] to the position k (the position where the next unique element should be placed).

k is incremented to keep track of the next available position for a unique element.

5. Printing the Result:
c
Copy
Edit
for (i = 0; i < k; i++) {
    printf("%d ", arr[i]);
}
After all the iterations, the first k elements of the array will contain all the unique elements, with duplicates removed.

We print these k elements as the final result.

Example Walkthrough:
Let's consider the input array:

c
Copy
Edit
arr[] = {12, 15, 12, 20, 25, 20, 30};
First Pass (i = 0):

arr[0] = 12. There are no previous elements, so it's placed at arr[k] = arr[0].

k becomes 1.

Second Pass (i = 1):

arr[1] = 15. No duplicates before it, so it's placed at arr[k] = arr[1].

k becomes 2.

Third Pass (i = 2):

arr[2] = 12. It matches with arr[0], so it’s a duplicate and is skipped.

Fourth Pass (i = 3):

arr[3] = 20. No duplicates before it, so it’s placed at arr[k] = arr[2].

k becomes 3.

Fifth Pass (i = 4):

arr[4] = 25. No duplicates before it, so it’s placed at arr[k] = arr[3].

k becomes 4.

Sixth Pass (i = 5):

arr[5] = 20. It matches arr[3], so it’s a duplicate and is skipped.

Seventh Pass (i = 6):

arr[6] = 30. No duplicates before it, so it’s placed at arr[k] = arr[4].

k becomes 5.

Final Array:
After completing all passes, the first k elements of the array will be:


arr[] = {12, 15, 20, 25, 30}
These are the unique elements, and we print them.*/



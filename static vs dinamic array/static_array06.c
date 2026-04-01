// ! Palindrome ro not

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int isPalindrome = 1;  // Assume the array is a palindrome initially

    // Check elements from both ends
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0;  // If elements are not equal, it's not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}


/* Assume the array is a palindrome initially:

int isPalindrome = 1;
We initialize a variable isPalindrome and set it to 1 (True). This means we are assuming, at first, that the array is a palindrome.

If we find any pair of elements that don't match later, we will set this variable to 0 (False).

Iterate through the first half of the array:

c
Copy
Edit
for (int i = 0; i < n / 2; i++) {
We only need to check the first half of the array (i < n / 2). This is because in a palindrome, the second half of the array is just a reverse of the first half.

The loop will run from i = 0 to i = n / 2 - 1, ensuring we only check the necessary elements.

Check elements from both ends of the array:

c
Copy
Edit
if (arr[i] != arr[n - 1 - i]) {
The condition arr[i] != arr[n - 1 - i] compares an element at index i (from the start) with the corresponding element at index n - 1 - i (from the end).

If the two elements do not match, it means the array is not a palindrome, so we set isPalindrome = 0 and break out of the loop.

Break the loop if a mismatch is found:

c
Copy
Edit
isPalindrome = 0;  // If elements are not equal, it's not a palindrome
break;
If a mismatch is detected between the elements at positions i and n - 1 - i, we immediately set isPalindrome to 0 (False) because the array is not a palindrome.

The break statement stops further iterations since there is no need to check other elements once we know the array is not a palindrome.

Why We Only Check Half of the Array:
In a palindrome, the second half of the array is simply a mirror image of the first half.

For example, in the array {1, 2, 3, 2, 1}, the second half ({2, 1}) is just the reverse of the first half ({1, 2}).

Thus, checking from the start to the middle is sufficient to determine if the array is a palindrome, saving unnecessary comparisons.

What Happens After the Loop?
If no mismatches were found, the loop completes, and the isPalindrome remains 1, meaning the array is indeed a palindrome.

If a mismatch was found, isPalindrome is set to 0, and the array is not a palindrome.

Example Walkthrough:
Let's consider the array {1, 2, 3, 2, 1}:

Initial Setup:

isPalindrome = 1

First Comparison (i = 0):

arr[0] = 1 and arr[4] = 1 are equal, so we continue.

Second Comparison (i = 1):

arr[1] = 2 and arr[3] = 2 are equal, so we continue.

Third Comparison (i = 2):

arr[2] = 3 and arr[2] = 3 are equal, so the loop ends.

The array passes all comparisons, and isPalindrome = 1, indicating that the array is a palindrome.

*/
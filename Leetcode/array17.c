
//is 2 sum array has duplicates what i do

#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    sort(arr, n);

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("(%d, %d)\n", arr[left], arr[right]);

            // skip duplicates
            int l = arr[left], r = arr[right];
            while (left < right && arr[left] == l) left++;
            while (left < right && arr[right] == r) right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return 0;
}



/* What problem does this solve?

It prevents printing the same pair multiple times when the array contains duplicate values.

🔹 First line
int l = arr[left], r = arr[right];


You just found a valid pair:

(arr[left], arr[right])


So you store their values:

l = value on the left

r = value on the right

Example:

Array (sorted): 1 2 2 3 3 4
left → 2
right → 3

l = 2
r = 3

🔹 First while loop (skip left duplicates)
while (left < right && arr[left] == l)
    left++;

What it means:

“Keep moving left forward as long as it still points to the same value l.”

Why?

If there are multiple 2s, pairing each 2 with 3 would give duplicate pairs.

Example:
2 2 2 3
^
left


Move left:

2 2 2 3
  ^


Move again:

2 2 2 3
    ^


Now arr[left] != l, so stop.

🔹 Second while loop (skip right duplicates)
while (left < right && arr[right] == r)
    right--;

What it means:

“Keep moving right backward as long as it still points to the same value r.”

Example:
2 3 3 3
      ^
     right


Move right:

2 3 3 3
    ^


Move again:

2 3 3 3
  ^


Now arr[right] != r, so stop.

🔹 Why BOTH sides?

Because duplicates can exist on either side.

Without skipping both:

(2,3)
(2,3)   ❌ duplicate
(2,3)   ❌ duplicate


With skipping:

(2,3)   ✅ only once

🔹 Simple English summary

After finding a valid pair,
move the left pointer past all equal left values
and
move the right pointer past all equal right values,
so the same pair is never counted again.*/
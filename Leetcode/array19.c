
// 3 sum 

// 3 sum 


#include <stdio.h>

int main() {
    int nums[] = {-4, -1, -1, 0, 1, 2}; // sorted array
    int n = 6;
    int target = 0;

    for (int i = 0; i < n - 2; i++) {

        // skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == target) {
                printf("[%d, %d, %d]\n",
                       nums[i], nums[left], nums[right]);
                       
                int l = nums[left], r = nums[right];       

                // skip duplicate left & right values
                while (left < right && nums[left] == l )
                    left++;
                while (left < right && nums[right] == r)
                    right--;

  
            }
            else if (sum < target) {
                left++;   // need bigger sum
            }
            else {
                right--;  // need smaller sum
            }
        }
    }

    return 0;
}



/*!SECTIONBig Picture (What this code does)

Given a sorted array nums, this code finds all unique triplets
[nums[i], nums[left], nums[right]] such that:

nums[i] + nums[left] + nums[right] == target


It runs in O(n²) time instead of O(n³).

🔹 Outer Loop (i) — Fixing the first element
for (int i = 0; i < n - 2; i++) {

Why n - 2?

You need three numbers:

i

left

right

If i reaches n-2, there won’t be two elements left.

🔸 Skip duplicate first elements
if (i > 0 && nums[i] == nums[i - 1])
    continue;

Why?

If you don’t skip duplicates, you’ll print the same triplet multiple times.

Example:

nums = [-1, -1, 0, 1]


If i = 0 → -1
If i = 1 → -1 again → duplicate work

So we only process the first occurrence.

🔹 Two Pointers (left & right)
int left = i + 1;
int right = n - 1;


left starts just after i

right starts at the end of the array

Because the array is sorted, we can move pointers intelligently.

🔹 While Loop (Searching pairs)
while (left < right) {


We keep searching as long as the pointers don’t cross.

🔹 Sum Calculation
int sum = nums[i] + nums[left] + nums[right];


This is the current triplet sum.

🔹 Case 1: sum == target ✅
if (sum == target) {
    printf("[%d, %d, %d]\n",
           nums[i], nums[left], nums[right]);


🎉 You found a valid triplet.

🔸 Skip duplicate left values
while (left < right && nums[left] == nums[left + 1])
    left++;

Why?

Example:

nums = [-1, 0, 0, 0, 1]


Without skipping:

[-1, 0, 1]   (same triplet printed multiple times)


This moves left to the last occurrence of that value.

🔸 Skip duplicate right values
while (left < right && nums[right] == nums[right - 1])
    right--;


Same logic as left, but on the right side.

🔸 Move both pointers
left++;
right--;


Why both?

You’ve already used these values

Need new combinations

🔹 Case 2: sum < target ⬆
else if (sum < target) {
    left++;   // need bigger sum
}

Why does this work?

Array is sorted.

If sum is too small:

Increase left → larger number → larger sum

🔹 Case 3: sum > target ⬇
else {
    right--;  // need smaller sum
}


If sum is too large:

Decrease right → smaller number → smaller sum*/

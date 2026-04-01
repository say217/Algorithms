
// 3 sum


#include <stdio.h>

int main() {
    int nums[] = {-4, -1, -1, 0, 1, 2}; // sorted
    int n = 6;
    int target = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            for (int k = j + 1; k < n; k++) {
                if (k > j + 1 && nums[k] == nums[k - 1]) continue;

                if (nums[i] + nums[j] + nums[k] == target) {
                    printf("[%d, %d, %d]\n",
                           nums[i], nums[j], nums[k]);
                }
            }
        }
    }

    return 0;
}



/*!SECTION

First Loop (i)
for (int i = 0; i < n; i++) {
    if (i > 0 && nums[i] == nums[i - 1]) continue;


What this does:

Fixes the first number of the triplet
If the current value is the same as the previous one, skip it


Second Loop (j)
for (int j = i + 1; j < n; j++) {
    if (j > i + 1 && nums[j] == nums[j - 1]) continue;


What this does:

Fixes the second number

Skips duplicates only for the same i


Third Loop (k)
for (int k = j + 1; k < n; k++) {
    if (k > j + 1 && nums[k] == nums[k - 1]) continue;


What this does:

Chooses the third number

Skips duplicate third values

Check the Sum
if (nums[i] + nums[j] + nums[k] == target) {
    printf("[%d, %d, %d]\n", nums[i], nums[j], nums[k]);
}


What this does:

If the sum equals target

We print/store the triplet

Because we skipped duplicates earlier, this triplet is guaranteed unique

Why Duplicate Skipping Works

Since the array is sorted:

Duplicate numbers are next to each other

By skipping repeated values at each loop level:

Same triplet cannot be formed again



*/



































































































































































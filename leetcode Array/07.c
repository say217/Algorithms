/*Input:  [2, 2, 1, 1, 1, 2, 2]
n = 7 → n/2 = 3
Output: 2
(because 2 appears 4 times > 3)
*/
/*Input:  [3, 2, 3]
n = 3 → n/2 = 1
Output: 3
(because 3 appears 2 times > 1)
*/

#include <stdio.h>

int majorityElement(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            return nums[i];   // found majority
        }
    }
    return -1;  // not possible as per problem guarantee
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int ans = majorityElement(nums, n);

    printf("Majority Element: %d\n", ans);
    return 0;
}

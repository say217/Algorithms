#include <stdio.h>

// Function definition (same as LeetCode)
int* sumEvenAfterQueries(int* nums, int numsSize,
                         int** queries, int queriesSize,
                         int* queriesColSize,
                         int* returnSize) {

    int evenSum = 0;
    static int result[1000];   // static result array
    *returnSize = queriesSize;

    // Step 1: Calculate initial even sum
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            evenSum += nums[i];
        }
    }

    // Step 2: Process each query
    for (int i = 0; i < queriesSize; i++) {
        int val = queries[i][0];
        int idx = queries[i][1];

        // Remove old value if it was even
        if (nums[idx] % 2 == 0) {
            evenSum -= nums[idx];
        }

        // Update the array
        nums[idx] += val;

        // Add new value if it is even
        if (nums[idx] % 2 == 0) {
            evenSum += nums[idx];
        }

        // Store result
        result[i] = evenSum;
    }

    return result;
}

// Main function to test the code
int main() {

    // Input array
    int nums[] = {1, 2, 3, 4};
    int numsSize = 4;

    // Queries array
    int q1[] = {1, 0};
    int q2[] = {-3, 1};
    int q3[] = {-4, 0};
    int q4[] = {2, 3};

    int* queries[] = {q1, q2, q3, q4};
    int queriesSize = 4;
    int queriesColSize[] = {2, 2, 2, 2};

    int returnSize;

    // Call function
    int* result = sumEvenAfterQueries(
        nums,
        numsSize,
        queries,
        queriesSize,
        queriesColSize,
        &returnSize
    );

    // Print output
    printf("Output:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}


/*!SECTION

Function Signature
int* sumEvenAfterQueries(int* nums, int numsSize,
                         int** queries, int queriesSize,
                         int* queriesColSize,
                         int* returnSize)


nums → input array

queries → list of queries [val, index]

returnSize → number of outputs (same as queries count)

Returns an array where each element is the even sum after a query

2. Initialization
int evenSum = 0;
static int result[1000];
*returnSize = queriesSize;


evenSum stores the current sum of even numbers

static result[] is used because local arrays cannot be returned safely in C

returnSize tells the caller how many results are returned

3. Initial Even Sum Calculation
for (int i = 0; i < numsSize; i++) {
    if (nums[i] % 2 == 0) {
        evenSum += nums[i];
    }
}


For input:

nums = [1, 2, 3, 4]


Even numbers are 2 and 4

evenSum = 2 + 4 = 6

Detailed Dry Run (Query by Query)
Initial State
nums     = [1, 2, 3, 4]
evenSum = 6

Query 1 → [1, 0]

Add 1 to index 0

Step 1: Check old value
nums[0] = 1 (odd) → nothing to remove

Step 2: Update value
nums[0] = 1 + 1 = 2

Step 3: Check new value
2 is even → evenSum += 2

Result
nums     = [2, 2, 3, 4]
evenSum = 8
result[0] = 8

Query 2 → [-3, 1]

Add -3 to index 1

Step 1: Remove old even value
nums[1] = 2 (even)
evenSum = 8 - 2 = 6

Step 2: Update
nums[1] = 2 - 3 = -1

Step 3: New value check
-1 is odd → no addition

Result
nums     = [2, -1, 3, 4]
evenSum = 6
result[1] = 6

Query 3 → [-4, 0]

Add -4 to index 0

Step 1: Remove old even value
nums[0] = 2
evenSum = 6 - 2 = 4

Step 2: Update
nums[0] = 2 - 4 = -2

Step 3: Add new even value
-2 is even
evenSum = 4 + (-2) = 2

Result
nums     = [-2, -1, 3, 4]
evenSum = 2
result[2] = 2

Query 4 → [2, 3]

Add 2 to index 3

Step 1: Remove old even value
nums[3] = 4
evenSum = 2 - 4 = -2

Step 2: Update
nums[3] = 4 + 2 = 6

Step 3: Add new even value
evenSum = -2 + 6 = 4

Result
nums     = [-2, -1, 3, 6]
evenSum = 4
result[3] = 4

Final Output
[8, 6, 2, 4]

Time & Space Complexity
Time Complexity

Initial even sum: O(n)

Each query: O(1)

Total: O(n + q)













*/
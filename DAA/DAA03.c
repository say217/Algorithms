

#include <stdio.h>

// function to return maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int dp[n+1][W+1];

    // build table dp[][]
    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= W; w++) {

            if(i == 0 || w == 0)
                dp[i][w] = 0;

            else if(wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]],
                               dp[i-1][w]);

            else
                dp[i][w] = dp[i-1][w];
        }
    }

    return dp[n][W];
}

int main() {

    int val[3];
    for(int i = 0; i < 3; i++){
        printf("ENter the value of item %d:", i + 1);
        scanf("%d", &val[i]);
    }
    
    int wt[] = {10, 20, 30};
    int W = 50;   // capacity
    int n = 3;

    int result = knapsack(W, wt, val, n);
    printf("NUmber n :%d\n", n);
    printf("Weeight W :%d\n", W);
    printf("Maximum value = %d\n", result);

    return 0;
}


/* #ANCHOR - Explaination

Boss, here are the one-line reasons for each statement.

int dp[n+1][W+1];
→ Creates a table to store the maximum value for every combination of items (0…n) and capacity (0…W).

dp[i][w] = dp[i-1][w];
→ If we don’t take the current item, the best value stays the same as the previous item’s result.

dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
→ Chooses the better option between taking the item or skipping it.

val[i-1] + dp[i-1][w - wt[i-1]]
→ Value if we take the item, plus the best value for the remaining capacity.

return dp[n][W];
→ The cell dp[n][W] stores the maximum value achievable using all n items within capacity W.




Imagine we are filling the DP table and we reach a certain point:

considering item i

current bag capacity w

The condition:

else if(wt[i-1] <= w)

means:

Can the current item fit in the remaining capacity?

Example:

Item weight = 20
Current capacity = 30

Since 20 ≤ 30, the item can fit, so the algorithm must decide:

Take the item

Skip the item

The program calculates both possibilities.

The Two Possible Universes

The formula used:

dp[i][w] = max(
    val[i-1] + dp[i-1][w - wt[i-1]],
    dp[i-1][w]
);

Think of it as two alternate realities.

Reality 1 — Take the item
val[i-1] + dp[i-1][w - wt[i-1]]

Meaning:

take the item's value

then solve the remaining capacity problem with previous items

Example:

Item value = 100
Weight = 20
Capacity = 30

Remaining capacity:

30 - 20 = 10

So we add:

100 + best value possible with capacity 10
Reality 2 — Skip the item
dp[i-1][w]

Meaning:

Ignore the item and keep the previous best solution for the same capacity.

Then we choose the better one
max(take_item, skip_item)

The algorithm always chooses the larger value.

Walkthrough With the Real Example

Items:

Item	Weight	Value
1	10	60
2	20	100
3	30	120

Capacity:

W = 50
Step 1 — Consider Item 1

Weight = 10
Value = 60

Possible result:

Take it → value 60

So best so far:

60
Step 2 — Consider Item 2

Weight = 20
Value = 100

Now the algorithm checks both choices.

Take Item 2

Remaining capacity:

50 - 20 = 30

Best value for capacity 30 using previous items = 60

So:

100 + 60 = 160
Skip Item 2

Best previous result = 60

Take maximum:

max(160, 60) = 160
Step 3 — Consider Item 3

Weight = 30
Value = 120

Again two choices.

Take Item 3

Remaining capacity:

50 - 30 = 20

Best value for capacity 20 = 100

So:

120 + 100 = 220
Skip Item 3

Best previous result = 160

Choose maximum:

max(220, 160) = 220
Final Answer
Maximum value = 220

Items selected:

Item 2 (20 weight, 100 value)
Item 3 (30 weight, 120 value)

Total weight:

20 + 30 = 50

Total value:

220

Perfect fit.

Why Dynamic Programming Works Here

A naive brute-force solution would check every subset of items.

With n items, total possibilities:

2
𝑛
2
n

For just 30 items, that’s over 1 billion combinations.


n → number of items

W → maximum capacity of the bag
Therefore the time complexity is

O(nW)

Dynamic programming avoids recomputation by storing intermediate results in the dp table. Each small solved problem becomes a building block for a larger one. That table quietly acts like a memory of the algorithm’s past reasoning.

The surprising part: this same logic appears in places far removed from backpacks—memory allocation in operating systems, cargo loading for spacecraft, portfolio optimization in finance, and even selecting which neural-network layers to keep during model pruning. One simple recurrence relation quietly governs a lot of complex decisions in computing.*/
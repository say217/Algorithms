/* Best Time to Buy and Sell Stock (LeetCode 121)

You are given an array prices where prices[i] is the price of a stock on the i-th day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve.
If no profit is possible, return 0.*/

#include <stdio.h>

// Function to calculate max profit
int maxProfit(int prices[], int n) {
    int minPrice = prices[0];   // Track lowest price so far
    int maxProfit = 0;          // Track maximum profit

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];  // Update minPrice if lower found
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;  // Update maxProfit
            }
        }
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", result);

    return 0;
}

// 	• Plus One (LC 66)
/*	✅ Example runs:

Input: [1,2,3] → Output: [1,2,4]

Input: [9,9,9] → Output: [1,0,0,0]
*/


#include <stdio.h>

int plusOne(int digits[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;      // just increase and return
            return n;         // length unchanged
        }
        digits[i] = 0;        // set current digit to 0, carry goes to next
    }
    // if all were 9 (like 999 → 1000), we need one more digit
    for (int i = n; i > 0; i--) {
        digits[i] = digits[i - 1];
    }
    digits[0] = 1;
    return n + 1;             // new length
}

int main() {
    int digits[20] = {9, 9, 9};   // example input
    int n = 3;

    int newLen = plusOne(digits, n);

    printf("Result: ");
    for (int i = 0; i < newLen; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}

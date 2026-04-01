//TODO -  Factorial of large numbers 

/* #include <stdio.h>

int main() {
    int n = 20;            // Must be <= 20
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}
*/

#include <stdio.h>

#define MAX 5000   // Enough for factorial up to ~1000

int main() {
    int n = 100;      // Change value as needed
    int fact[MAX];
    int size = 1;

    fact[0] = 1;      // Initialize factorial = 1

    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (int i = 0; i < size; i++) {
            int prod = fact[i] * x + carry;
            fact[i] = prod % 10;
            carry = prod / 10;
        }

        while (carry) {
            fact[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }

    // Print factorial (reverse order)
    printf("Factorial of %d is:\n", n);
    for (int i = size - 1; i >= 0; i--)
        printf("%d", fact[i]);

    return 0;
}


































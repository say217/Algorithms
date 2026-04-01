//TODO - Find the largest elemnet


#include <stdio.h>

int largest(int a[], int n) {
    if (n == 1)          // base case
        return a[0];

    int big = largest(a, n - 1);

    return (a[n - 1] > big) ? a[n - 1] : big;
}

int main() {
    int a[] = {4, 1, 9, 3};
    int n = 4;

    printf("Largest = %d", largest(a, n));
    return 0;
}

/*TODO print numbers 1 to N

for(int i = 1; i <= n; i++) {
    printf("%d ", i);
}

*/

#include <stdio.h>

void printNumbers(int i, int n) {
    if (i > n)        // base case
        return;

    printf("%d ", i);

    printNumbers(i + 1, n);  // recursive call
}

int main() {
    int n = 5;
    printNumbers(1, n);
    return 0;
}

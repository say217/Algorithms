// Casheirs algorithm
#include <stdio.h>

int main() {
    int amount;
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);

    printf("Enter the amount: ");
    scanf("%d", &amount);

    /* Print available denominations */
    printf("Available denominations: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", denominations[i]);
    }
    printf("\n");

    printf("Currency breakdown:\n");

    for (int i = 0; i < n; i++) {
        if (amount >= denominations[i]) {
            int count = amount / denominations[i];
            amount = amount % denominations[i];
            printf("%d x %d\n", denominations[i], count);
        }
    }

    return 0;
}












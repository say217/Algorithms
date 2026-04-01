#include <stdio.h>

int main() {
    int stack[5];
    int top = -1;

    // PUSH elements
    stack[++top] = 30;
    stack[++top] = 10;
    stack[++top] = 50;
    stack[++top] = 20;
    stack[++top] = 40;

    printf("Original Stack:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    // SORT the stack (simple bubble sort)
    for (int i = 0; i <= top; i++) {
        for (int j = i + 1; j <= top; j++) {
            if (stack[i] > stack[j]) {  // change > to < for descending order
                int temp = stack[i];
                stack[i] = stack[j];
                stack[j] = temp;
            }
        }
    }

    printf("\n\nSorted Stack (ascending):\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    return 0;
}

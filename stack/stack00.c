#include <stdio.h>

int main() {
    int stack[5];     // Stack of size 5
    int top = -1;     // Initially empty

    // PUSH elements
    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    printf("Stack elements after pushing:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    // POP one element
    printf("\n\nPopped element: %d\n", stack[top]);
    top--;

    // Display remaining elements
    printf("Stack after popping:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    return 0;
}

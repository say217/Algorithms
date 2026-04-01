#include <stdio.h>

void changePointer(int **pp) {
    static int x = 50;
    *pp = &x;  // change what the original pointer points to
}

int main() {
    int a = 10;
    int *p = &a;

    printf("%d\n", *p); // prints 10
    changePointer(&p);
    printf("%d\n", *p); // prints 50, pointer changed by function

    return 0;
}




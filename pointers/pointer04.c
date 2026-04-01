#include <stdio.h>
//why use NULL pointers?
//To check if a pointer has been assigned a valid address before using it
int main() {
    int *p = NULL;

    if (p == NULL) {
        printf("Pointer is NULL, no valid memory address assigned.\n");
    } else {
        printf("Pointer points to value: %d\n", *p);
    }
     int x = 10;
    p = &x;

    if (p != NULL) {
        printf("Now pointer points to value: %d\n", *p);
    }

    return 0;
}



#include <stdio.h>
// short, pp is a pointer to a pointer—it stores the memory address of another pointer variable.

//When you want a function to allocate memory and update a pointer variable in the caller, you pass a pointer to that pointer.

int main() {
    int a = 10;       // normal int variable
    int *p = &a;      // pointer to int, points to a
    int **pp = &p;    // pointer to pointer, points to p


     // Print value of a using different levels of indirection
    printf("Value of a: %d\n", a);        // direct access
    printf("Value of a via p: %d\n", *p); // dereference p
    printf("Value of a via pp: %d\n", **pp); // dereference pointer to pointer

    // Print addresses
    printf("Address of a: %p\n", &a);
    printf("Value of p (address of a): %p\n", p);
    printf("Value of pp (address of p): %p\n", pp);
    return 0;
}
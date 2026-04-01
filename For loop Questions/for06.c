

// Fibonacci Series: Generate the first n terms of the Fibonacci series using a for loop.


#include <stdio.h>

int main(){
    int n = 10, i, a = 0, b = 1, next;
    for(i = 0; i <= n; i++){
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}



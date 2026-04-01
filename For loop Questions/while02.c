

// Sum of Numbers: Calculate the sum of the first n natural numbers using a for loop.

#include <stdio.h>

int main(){
    int n, sum = 0;
    int i = 1;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
    
}
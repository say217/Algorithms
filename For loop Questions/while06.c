// fibbonacii


#include <stdio.h>

int main(){
 int i = 0, a = 0, b = 1, next;
 while(i <= 10){
    printf("%d ", a);
    next = a + b;
    a = b;
    b = next;
    i++;
 }

 return 0;
}

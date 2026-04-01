


// Factorial: Write a program to calculate the factorial of a given number using a for loop.


#include <stdio.h>

int main(){
  int i , fact = 1;
  for (i = 1;  i <= 5; i++){
    fact = fact * i;
  }
  printf("%d", fact);
  return 0;
}
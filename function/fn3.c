/*!SECTION

Function with Arguments and Return Value
This is the most useful type in real programs.

Takes input
Processes it
Returns result
*/

#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int result = add(5, 3);
    printf("Sum = %d", result);
}














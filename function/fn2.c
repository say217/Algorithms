/* Function with Arguments but No Return Value

Here the function receives input but does not return anything.
*/


#include <stdio.h>

void add(int a, int b)   // arguments but no return
{
    int sum = a + b;
    printf("Sum = %d", sum);
}

int main()
{
    add(5, 3);
    return 0;
}



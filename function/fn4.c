/*!SECTION
Function with No Arguments but Return Value
Here the function does not take input, but returns something.*/


#include <stdio.h>

int getNumber()
{
    int x = 10;
    return x;
}

int main()
{
    int num = getNumber();
    printf("%d", num);
}


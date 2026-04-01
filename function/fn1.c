

/*!SECTION

Function with No Arguments and No Return Value

This function does not receive data and does not send anything back.
It simply performs a task.
*/




#include <stdio.h>

void greet()   // no argument, no return
{
    printf("Hello Boss\n");
}

int main()
{
    greet();   // function call
    return 0;
}
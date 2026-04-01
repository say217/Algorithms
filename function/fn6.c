/*Pure Function

A pure function has two strict properties.

Same input → same output every time

No side effects

A side effect means changing something outside the function: printing, modifying global variables, writing files, etc.

A pure function behaves like a mathematical equation.

*/


/*!SECTIONImpure Function

An impure function does at least one of these:

• modifies external data
• depends on external state
• interacts with the outside world
*/

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

//This function prints output. Printing is a side effect, so the function is impure.

void showSum(int a, int b)
{
    printf("%d", a + b);
}

int total = 0;

void addToTotal(int x)
{
    total += x;
}
//Here the function changes a global variable. That also makes it impure.
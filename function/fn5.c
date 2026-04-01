/*!SECTION1. Library Functions

These are pre-written functions provided by the C standard library.
Examples:

printf()
scanf()
sqrt()
strlen()
pow()

User-Defined Functions
Functions created by the programmer.
*/



/*!SECTION
Inline Functions (Optimization concept)

Normally, when a function is called, the CPU must jump to another memory location. That has a small overhead.

An inline function suggests the compiler directly inserts the function’s code instead of calling it.

Ex
*/

inline int square(int x)
{
    return x * x;
}





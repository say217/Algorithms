/*!SECTION
Deterministic functions behave like reliable equations. For the 
same input they always produce the same output. Most mathematical operations fall here.

Example idea:

f(x) = x * x

Call it ten times with 5, it always gives 25. Determinism is extremely 
valuable for debugging and scientific computing because nothing mysterious changes between runs.

====================================================================================================
Non-deterministic functions can produce different outputs even with the same
 input. They depend on randomness, system state, or time.

Example in C:


*/
#include <stdlib.h>

int randomNumber()
{
    return rand();
}

/*!SECTION
===========================================================================================

Idempotent functions are a curious category borrowed from mathematics. 
An operation is idempotent if applying it multiple times gives the same result as applying it once.

Example idea:

absolute_value(x)

Calling abs(-5) repeatedly always produces 5. In distributed systems this 
property becomes powerful because repeating the operation does not break correctness.

*/

//===================================================================================



/*!SECTION
Higher-order functions operate on other functions. They may receive functions as arguments or return functions.

C does not have them in the elegant way languages like Python or JavaScript do, but it still supports them using function pointers.*/

int add(int a, int b)
{
    return a + b;
}

int operate(int x, int y, int (*func)(int,int))
{
    return func(x,y);
}

/*!SECTION

Anonymous functions (lambda-style ideas) exist in many modern languages, though classic 
C does not truly support them. Instead, programmers simulate
 them with function pointers or macros. Languages l
 ike Python, JavaScript, and Rust allow functions without names.
 
 
 # lambda function to square a number
square = lambda x: x * x

# calling the function
result = square(5)

print("Square:", result)


*/







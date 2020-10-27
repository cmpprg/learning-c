/*
Author: Ryan Camp
Purpose: Learn about the cast and sizeof operators
Date: 10-24-2020
*/

/*
conversions of data between different types can happen automatically(implicit conversion), by the language.

conversions of data between different types can happen manually(explicit conversion), by the programmer. 
    - demand precise typ conversion(cast).
    - example: (int) 12.33; = 12

Normally you shouldn't mix types, but ther are occasions when it is useful
    - truncated: becomes less precise
    - promoted: becomes more prcise.

sizeof(): returns the number of bytes in memory for a variable, array name, name of basic data type, derived data type, or an expression.  

"*" as a unary operator = dereference of a pointer.

"?:" = ternary operator
    - example:
        - condition is true ? pick this : don't not this
        - condition is false ? don't pick this : pick this.
*/

#include <stdio.h>

int main() 
{
    // if you assign a float to an int variable, the value will be truncated.
    int x = 0;
    float y = 12.44;
    x = y;
    printf("The truncated value is %i\n", x);

    int result = sizeof(double) * 8;
    printf("%d\n", result);
    
    return 0;
}

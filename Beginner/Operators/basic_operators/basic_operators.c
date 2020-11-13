/*
Author: Ryan Camp
Purpose: To learn about basic operators in C language.
Date: 10-24-2020
*/

/*
Arithmetic Operator: mathematical function that takes two operands and performs a calculation
(+, -, *, /, %, ++, --)

Logical Operator: is an operator that returns a Boolean result that is based on the Boolean result of one or two ther exprssions
(&&, ||, !)

Assignment Operator: set variable (on left) equal to value (on right)
(=, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=)

Relational Operator: compre variables against eachother. resulting in a Boolean.
(==, !=, >, <, >=, <=)
*/
#include <stdio.h>

int main()
{

    int a = 20;
    int b = 11;

    int result = 0;

    result = a % b;

    printf("The Value of c is: %i\n", result);

    _Bool c = 1;
    _Bool d = 0;
    _Bool bool_res;

    bool_res = c || d;

    printf("bool_res: %d\n", bool_res);

    return 0;
}

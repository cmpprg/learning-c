/*
Author: Ryan Camp
Purpose: To learn about operator precedence
Date: 10-24-2020
*/

/*
Operator prcedence determines the grouping of terms in a nexpression and decides how an expression is evaluated.
    - dictates the order of evaluation when two operators share an operand
    - certain operators have higher precedence than others
    - example: * has a higher precedence than +.

What if two operators have the same precedence?
    - Then associativity rules are applied (left to right, or right to left).

Use parenthasis as much as posible to explicitly declare your own order of operations. Try not to rely
to heavily on implicit orders given by the language.

*/

#include <stdio.h>

int main() 
{
    int x = 7 + 3 * 2; // expected to be 13 not 20. just like in math.
    int y = (7 + 3) * 2; //expect to be 20, because parenthasis have the highest precedence.

    printf("The value of x: %i\n", x);
    printf("The value of y: %i\n", y);
    return 0;
}

/*
Author: Ryan Camp
Purpose: Some notes on operators in C language
Data: 10-22-2020
*/

/*
C language operators are infix style (5 + 8), some have prefix style (+ 5 8), and postfix style (5 8 +)
but C uses infix style operations.

(5 + 8), operand = 5 & 8, operator = +

logical operator (Boolean operator), true / false, on / off, 1 / 0;

arithmetic operator ( +, -, *, / )

relational operator ( <, >, != )

bitwise operator ( <<, >>, ~ )

Expression: consists of a combination of operators and operands
    - operands are what an operator operates on
    - operands can be constants, variables, or combinations of the two
    - every expression returns a value.
    - Examples: -6,  4 + 21,  a * (b + c / d) / 20,  q = 5 * 2,  x = ++q % 3,  q > 3 
Statements: form the basic program steps of C, and most statements are constructed from expressions.
    - end in a semi-colon, simple satements are one line, but there can be complex ones.
    - Declaration statement:    int Ryan;
    - Assignment Statement:     Ryan = 5;
    - Function Call Statement:  printf("Ryan");
    - Structure Statement: while(Ryan < 20) Ryan = Ryan + 1;
    - Return Statement: return 0;

    - Compound Statement: two or more statements grouped together by a block
            {
                ...;
                ...;
                ...;
            }
*/

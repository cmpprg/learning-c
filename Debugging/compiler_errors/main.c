/*
Author: Ryan Camp
Purpose: Understand more about compiler errors in C language
Date: 11-1-2020
*/

/*
Notes:
    - Tend to be a little cryptic for new programmers 
    - Sometimes difficult to identify the true reason behind a compiler error.
    - compiler makes decisions about how to translate the code that the programmer has not written in the code

    - You should use an option for the cmpiler to notify all cases where there are implicit decisions
        - this option is -Wall

    - compiler will show two types of problems:
        - error. Can not compile (fatal)
            -focus on first error

        - warning. Can compile (non-fatal)
            -fix these! they are important.

        
    - Common Errors:

        - 'variable undeclared' (first used in this function)

        - warning: implicit declaration of function.
            - does not know about the function, no declaration at the top of program

        - warning: control reaches end of non-void function
            - your not returning the result at end of function

        - warning: unused variable ...
            - useless variable, remove these from code.

        - Undefined reference to...
            - compiler is telling us that there is a reference to a function with no definition.

        - error: confilicting types for ...
            - defined a prototype with a particular datatypes and then implemented incorrectly

    - Runtime errors
        - when program is running and then crashes for some reason.
        - segmentation fault
        - out of bounds errors
            - use callstack or debugger for this.
*/

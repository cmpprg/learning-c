/*
Author: Ryan Camp
Purpose: Learn about some common mistakes in C language
Date: 11-1-2020
*/

/*
NOTES:
    - Misplacing a semicolon
        
        if(j==100);<-----
            j = 0;

    - confusing the '='(assign) with '=='(compare)

        if(a=2)
            printf("Something")

        - this statement will always run because 'assignment' is true

    - ommitting prototype declarations
        - if you have a function declared after use, then you will get some warnings. declare or define at the top.

    - Failing to include a header file.

    - Confusing char vs string. 'A' is not the same as "A".

    - Using the wrong bounds for an array.

    - Forgetting to reserve an extra location in an array for the terminating null character '\0'.

    - Confusing '->' with '.'
        - the operator '.' is used for structure variables.
        - the operator '->' is used for structure pointer variables.

    - Omitting the ampersand before nonpointer variables in a scanf() call.

    - using a pointer variable before it's initialized

        char *char_pointer;
        *char_pointer = 'X';

    - Omitting the break statment at the end of a case in a switch statement.

    - inserting semicolon at the end of a preprocessor definition
        - anything with # in beginning does not need ;

    - Omitting closing (), {}, "", ''

    - GIVE IT TIME, THESE THINGS WILL BECOME SECOND NATURE IN TIME!
*/

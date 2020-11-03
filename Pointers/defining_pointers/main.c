/*
Author:Ryan Camp
Purpose: Learn about defining pointers
Date: 11-2-2020
*/

/*
NOTES:
    - pointers are not declared like normal variables
        pointer ptr; <--- NOPE!

    - it is not enough to say that a variable is a pointer
        - you also have to specify the kind of variable to which the pointer points
        - differenct variables take up different amounts of storage
        - some pointer operations require knowledge of that storage size.

    - you declare a pointer to a variable of type int with:
    
        int *pnumber;

    - the ype of the variable with the name pnmber is int*
        - can store the address of any variable of type int 

        int *pi; //pi is a pointer to an integer variable
        char *pc;  //pc is a pointe to a character variable
        float *pf, *pg; //pf and pg are pointers to float variables

    - space between * and variable type or name is optional

        int* pi;
        int * pi;
        int *pi; 

        // all these are the same 
    - programmers use the space in a declaratipn and omit it when dereferencing a variable.(convention)

    - the value of a pointer is a memory address, represented internally as unsigned integer on most systems
        - through it is stored as unsigned int, you can not, for instance, multiply it.

    - a pointer really is a new type, not an integer type
        - %p is the format specifier for a pointer

    - the previous declarations creatyes the variable but does not initialize it
        - dangerous when not initialized
        - you should always initialize a pointer when you declare it, NULL if needed

            int * pnumber = NULL;

    - NULL is a constant that is defined in the standard library <stdlib.h>
        - is equivalent of zero for a pointer

    - NULL is avalue that is guaranteed not to point to any location in memory 

    - if you want to initialize your variable with the address of a variable you have already declared use the & operator.

        int number = 99;
        int * pnumber = &number;

    - it is a good idea to use variable names starting with 'p' for pointer names.
*/
#include <stdio.h>

int main(void){

    return 0;
}

/*
Author: Ryan Camp
Purpose: Learn about accessing pointers in C language
Date: 11-2-2020
*/

/*
NOTES:
    - you use the indirection operator '*' to access the value of the variable pointed to by a pointer
        - also referred to as the dereference operator beacuae you use it to "dereference" a pointer 

    - you can use dereferenced pointer to calculate new results; 

    - the symbol,*, is used to declare a pointer, dereference a pointer, and in multiplication... so be careful. 
        - compiler knows based on context(where it is). 

    - 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number = 15;
    int * pnumber = &number;
    int result = 0;

    printf("This is number:                         %i\n", number);
    printf("This is pnumber dereferenced:           %i\n", *pnumber);
    printf("This is pnumber or number's address:    %p\n", pnumber);
    printf("This is pnumber's address:              %p\n", &pnumber);
    printf("This is number's memory use:            %lubytes\n", sizeof(number));
    printf("This is pnumber's memory use:           %lubytes\n", sizeof(pnumber));

    result = *pnumber + 5; //should equal 20;

    printf("\nThis is the value of result after calculation with dereferenced pnumber: %i\n", result);


    int count = 10, x;
    int * int_pointer = NULL;

    int_pointer = &count;
    x = *int_pointer;

    printf("\ncount = %i, x = %i\n", count, x);

    return 0;
}

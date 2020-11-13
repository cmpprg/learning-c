/*
Author: Ryan Camp
Purpose: Learn about pointers and Arrays
Date: 11-3-2020
*/

/*
Notes:
    - Array is a collection of objects of the same type that you can refer to using a single name
    
    - a Pointer is a variable that has as its value a memory address thjat can reference another vaiable or constant of a given type.

    - Arrays and pointers seem quite different, but, they are very closely related and can sometimes be used interchangeably.

    - one of the most common uses of pointers in c is as pointers to arrays.
        - char pointer is the same as a char array.

    - main reasons for using pointers to arrays are ones of notational convenience and of program efficiency.
        - more efficient to use char pointers over arrays.

    - pointers use less memory and execute faster.
*/

#include <stdio.h>

int main(void){

    int values[100] = {1, 2, 3};

    int * valuesPtr;

    valuesPtr = values;
    printf("\n-----------------------values--------------------\n\n");

    printf("%i\n", *valuesPtr);
    printf("%i\n", valuesPtr[0]);
    printf("%i\n", values[0]);
    printf("%i\n", values[1]);
    printf("%i\n", *values);
    printf("%i\n", *(values + 1));

    printf("\n-----------------------address--------------------\n\n");

    printf("address of values:      %p\n", &values);
    printf("address of valuesPtr:   %p\n", &valuesPtr);
    printf("value of valuesPtr:     %p\n", valuesPtr);

    
    return 0;
}

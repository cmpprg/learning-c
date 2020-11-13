/*
Author: Ryan Camp
Purpose: Learn about void pointers
Date: 11-2-2020
*/

/*
NOTES:
    - void = absence

    - a pointer of type void* can contain the address of a data item of any type,
        - often used as a parameter type or return value type with functions that deal with data in a type-independent way.

    - any kind of pointer can be passed around as a value of type void*
        - the void pointer does not know what type o object it is pointing to, so, it can not be dereferenced directly,
        - must be explicitly cast to another pointer type before it is dereferenced.

    - Address of type int can be stored in the void * pointer.

        
*/

#include <stdio.h>

int main(void){
    
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void * vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);
    
    
    return 0;
}

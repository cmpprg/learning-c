/*
Author: Ryan Camp
Purpose: Challenge 14 on basics of assigning and accessing pointers
Date 11-2-2020
*/

/*
Notes:
    - write a program that creates an int with a hard-coded value.
        - assign variable's address to a pointer variable

    - display as output the address of the pointer, the value of the pointer, and the value of what the pointer is pointing to.

    
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number = 32;
    int *pNumber = &number;

    printf("address of pointer:                     %p\n", &pNumber);
    printf("value of pointer:                       %p\n", pNumber);
    printf("value of what pointer is pointing too:  %i\n", *pNumber);
    return 0;
}

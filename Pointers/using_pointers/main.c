/*
Author: Ryan Camp
Purpose: Learn about using pointers in C language
Date: 11-3-2020
*/

/*
NOTES:
    - Basic Operations:
        - assign an address to pointer using &
        - dereference a pointer, get value of what the pointer is pointing to
        - you can take a pointer address
        - you can perform pointer arithmetic
            - add 5 to a pointer is moving it in the memory by 5 bytes.

        - you can find the difference of two pointers, to see how many bytes they are away from each other in memory
        - you can use relational operators with pointers
        - you can subtract an int from a pointer to get another pointer (memory address)
        
        - be careful when incrementing or decrementing pointers and causing an array 'out of bounds' error
            - computer does not keep track of whether pointer is still pointing at array element

        - value referenced by pointer can be used in an arithmetic expression
        - you can essentially do anything to the value dereferenced that you could with the variable.

        - when we have sued scanf() to input values, we have sued the & operator to obtain the address of a variable
            - on the variable that is to store the input
            - when you have apointer that already contains an address, you can use the pointer name as an argument for scanf()

        - DO NOT DEREFERENCE AN UNINITIALIZED POINTER!!!!!!!!!!!!

            int * pt; <--- DONT
            *pt = 5;  <--- DO THIS!

            - pt has a random value at this point, so there is no knowing where 5 will be placed.
            
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L;
    ++num2;
    num2 += *pNum;

    pNum = &num2;
    ++*pNum;

    printf("num1 = %ld num2 = %ld *pNum = %ld *pNum + num2 = %ld\n\n", num1, num2, *pNum, (*pNum + num2));

    int * pRand; // it seems that it is auto assignes NULL, this is false. you will notice that this programs ends in segmentation fault.
                 // it does not allocate memory.   

    printf("This is the value of pRand: %p\n", pRand);
    printf("This is the address of pRand: %p\n", &pRand);
    printf("This is the value of what is pointed to: %i\n", *pRand);
    

    
    return 0;
}

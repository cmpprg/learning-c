/*
Author: Ryan Camp
Purpose: Learn about principle of pass by reference in C Language
Date: 11-4-2020
*/

/*
NOTES:
    - Pass by Value: when a function copies the actual value of an argument into the formal parameter of the function.
        - changes made to the parameter inside the function have no effect on the argument
        - C Programming technically uses call by value for all args

    - Pass by Reference: copies the address of an argument into the formal parameter, thus being able to change the value in memory.
        - C can mimic pass by reference by passing in pointers to functions.
 
    - Returning pointers from a function
        - powerful capability
        - provides a way to return whole set of values (plural)
        - you have to declare a function returning a pointer

            int * myFunction(...args...){
                ..........
            }

        - there are specific hazards related to returning a pointer
            - use local vaiables to avoid interfereing with the variable that the argument points to

        
*/

#include <stdio.h>

void swap(int x, int y);
void swapPtr(int *x, int *y);

int main(void){
    //...start demonstrate pass by value.    
    //local definition
    int a = 100;
    int b = 200;

    printf("----------Pass By Value----------\n\n");

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(a, b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n\n", b);
    //...end demonstration of pass by value.
    //...start demonstration of pass by reference
    printf("----------Pass By Reference----------\n\n");

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swapPtr(&a, &b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n\n", b);
    //...end demonstration of pass by reference
    return 0;
}

void swap(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void swapPtr(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

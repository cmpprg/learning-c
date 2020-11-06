/*
Author: Ryan Camp
Purpose: simulate pass by reference in a challenge
Date: 11-4-2020
*/

/*
NOTES:
    - write a function that squares an number by itself
        - input int pointer

    - 
*/

#include <stdio.h>

void squareInt(int * number);

int main(void){
    int num1 = 5;
    int num2 = 6;

    printf("Before squared num1 = %i\n", num1);
    printf("Before squared num2 = %i\n", num2);

    squareInt(&num1);
    squareInt(&num2);

    printf("After squared num1 = %i\n", num1);
    printf("After squared num2 = %i\n", num2);
    return 0;
}

void squareInt(int * number){
    *number *= *number;  
}

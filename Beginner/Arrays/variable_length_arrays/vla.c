/*
Author: Ryan Camp
Purpose: Learn about variable length arrays in c language
Date: 10-25-2020
*/

/*
NOTES:
    - so far all the sizes of an array have been specified using a number.
    - the term variable in variable-length array does not mean that you can modify the length of the array after you create it.
        - A VLA keeps the same size after creation.
    - what it does mean is that you can set a variable and use it as the length.



*/

#include <stdio.h>
#define SIZE 10

int main(void) {
    int numbers[SIZE];

    for(int i = 0; i < SIZE; i++) {
        numbers[i] = i + i * i;
        printf("\tNumber %d is at Index: %d\n", numbers[i], i);
    }

    return 0;
}

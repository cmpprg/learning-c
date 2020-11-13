/*
Author: Ryan Camp
Purpose: Learn about the initialization process of arrays in c language
Date: 10-25-2020
*/

/*
NOTES:
    - you want to initialize values with any variable most of the time.
    - Initializing an array with values:

    int counters[5] = {0, 0, 0, 0, 0};

    // this set all the elements in counters array to zero.

    int sample_data[500] = {1, 2, 3};

    // this will initialize the first three values and set the rest to 0

    - to use 'designated initializers' (not supported in all compilers)

    float sample_array[500] = {[2] = 500.5, [1] = 300.0, [50] = 100.0};

    // this will initialize the particular locations chosen and set the rest to 0.0.

    - c does not provide any shortcut mechanisms for initializing array elements. 

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[100];
    
    for (int i = 0; i < 100; i++) {
        array[i] = i * i;
        printf("\tThe value of index %d is %d\n", i, array[i]);
    }

    return 0;
}

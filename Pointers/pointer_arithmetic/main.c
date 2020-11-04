/*
Author: Ryan Camp
Purpose: To learn about pointer arithmetic
Date: 11-3-2020
*/

/*
NOTES:
    - real power of using pointers to arrays comes into play when you want to sequence through the elements of an array.

    - *valuesPtr // can be used to access the first integer of the values array, that is, values[0];

    - to reference values[3] through the valuesPtr variable, you can add 3 to valuesPtr and then apply the indirection operator.

        *(valuesPtr + 3);

    - the expression, *(valuesPtr + i) can be used to access the value contained in values[i]
        
        values[10] = 27;

        // is the same as 

        *(valuesPtr + 10) = 27;

    - to set valuesPtr to point to the second element of the values array,
         you can apply the address operator to values[1] and assign the result to valuesPtr

        valuesPtr = &values[1];  //you can also...
    
        valuesPtr += 1;

    - using the ++ and -- has same effect as pointer += 1 or pointer -= 1, be careful... out of bounds errors are real.

    - to pass an array to a function, you simply specify the name of the array

    - to produce a pointer to an array, you need only specify the name of the array.

    - THE ONLY WAY DATA / ELEMENTS GET CHANGED OUTSIDE A FUNCTION, IS IF YOU ARE PASSING POINTERS OF THE DATA.

    
        int arraySum(int array[], const int n)  //is the same as...
        int arraySum(int *array, const int n) 

    

    int urn[3];
    int * ptr1, * ptr2;
----------------------------------------
        valid                   invalid 
----------------------------------------
        ptr1++;                 urn++;
        ptr2 = ptr1 + 2;        ptr2 = ptr2 + ptr1;
        ptr2 = urn + 1;         ptr2 = urn * ptr1;

---------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[], const int arraySize);

int main(void){
    int values[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}

int arraySum(int array[], const int arraySize){

    int sum = 0, *ptr;
    int * const arrayEnd = array + arraySize;

    for(ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}

//using pointer notation
/*
int arraySum(int *array, const int arraySize){

    int sum = 0;
    int * const arrayEnd = array + arraySize;

    for(; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}
*/

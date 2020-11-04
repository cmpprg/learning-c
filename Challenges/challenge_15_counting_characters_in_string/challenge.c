/*
Author: Ryan Camp
Purpose: Calulate the length of an string
Date: t0-4-2020
*/

/*
NOTES:
    - write function that calculates the length of a string
        - input const char pointer
        - only use pointer arithmetic
        - incrementation operateors (++) to get to end of string
        - required to use 'while loop'
        - function should subtract two pointers (one pinting to the end of the string and one pointing to the beginning of the string.)j
        - function should return an int that is the length of the string pased into the function.
*/

#include <stdio.h>
int stringLength(const char * string);

int main(void){

    printf("The length of str1 is: %i\n", stringLength("I'm a string"));
    printf("The length of str2 is: %i\n", stringLength("I'm the other string"));
    printf("The length of str3 is: %i\n", stringLength(""));

    return 0;

}
/*
Func Name: String Length
Purpose: to determine and return an int that is the value of the string input's length
*/
int stringLength(const char * stringPtr){
    const char * endPtr = stringPtr;

    while(*endPtr)
        ++endPtr;
    
    return (int)(endPtr - stringPtr);
}


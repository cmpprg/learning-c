/*
Author: Ryan Camp
Purpose: Learn about return data from functions in C language
Date: 10-27-2020
*/

/*
NOTES:
    
    int multiplyTwoNumber(int x, int y) {
        result = x * y;

        return result;
    }

    - you can return basic types. int, double, float, char, void, pointers, and enumerations.

    - you use a 'return' keyword and the data after to return it from the function.

    return result;
    
    - using 'return' with nothing, esentially just exits the function.

    - what you return has to match what you are telling the compiler in the header when you define the expression

    - a function that does not have a void must return a value.

    - if you try to return a different type than what is defined compliler will attempt to convert. If it fails it will
        return an error.

*/

#include <stdio.h>

//declare function
int multiplyTwoNumbers(int operand_1, int operand_2);

//start main program
int main(void) {
    
    int number_1 = multiplyTwoNumbers(11, 33);
    int number_2 = multiplyTwoNumbers(23, 45);

    printf("11 x 33 = %d\n", number_1);
    printf("23 x 45 = %d\n", number_2);
    return 0;
}

//define function
int multiplyTwoNumbers(int x, int y) {
    int result = x * y;

    return result;
}

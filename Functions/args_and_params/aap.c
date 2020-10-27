/*
Author: Ryan Camp
Puprose: Learn about arguments and parameters relative to functions in C language.
Date: 10-27-2020
*/

/*
NOTES:
    - Arguments and Parameters both have to do with data passed to a function
    - Parameter is what is declared/defined when you create the function.
    - Argument is what is passed when you call or use the function.

    - parameters and arguments are seperated by commas

    - if there are no parameters, it is good to use the keyword 'void', which mean nothing.

    - names of the parameters are local to the function.

    - when you pass an array to a function, you must also pass an additional argument specifying the size of the array

    ```
    void multiplyTwoNumbers(int x, int y) {
        int result = x * y
        printf("The product of %d multiplyed by %d, is: %d", x, y, result);
    }
    ```

    



*/
//declare headers.
#include <stdio.h>

//declare functions.
void multiplyTwoNumbers(int operand1, int operand2);

//start program main:
int main(void) {
    multiplyTwoNumbers(3, 20);
    multiplyTwoNumbers(45, 60);
    return 0;
}

//define functions.
void multiplyTwoNumbers(int x, int y) {
    int result = x * y;
    printf("The result of multiplying %d and %d is: %d\n", x, y, result);
}

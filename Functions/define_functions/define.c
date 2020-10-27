/*
Author: Ryan Camp
Purpose: Learn how to define functions in c language
Date: 10-27-2020
*/

/*
NOTES:
    
    - curly brace required in functions, it is the body of the function, the implementatio of code.
    - header defines name and parameters of the function and the type of return.

    - body contains normal code that performs the action or query.

    - Syntax:

    ```
    Return_type Function_name( Parameters, seperated, by, commas) {
        ...Statement...;
        Body of the function where all the action happens;    
        ...Statement...;
    } 
    ```

    - First line tells compiler 3 things:
        - The type of value it returns.
        - It's name.
        - the arguments it takes.     

    - Choose meaningful function name (What it will do)

    Example:

    ```
    void printMessage(void) {
        prinf("Programming is fun.\n");
    }
    ```

    - use camelCase 

    - Function Prototypes:
        - Defines a function
        - provides all the external specifications for the function.
        - Basically the same as declaring the function :
            
            void printMessage (void);

        - do this at the top of a file.
*/

#include <stdio.h>

//declare functions
int add();

//start of main
int main(void) {
    printf("%d", add());
    return 0;
}

//define functions
int add() {
    int number = 3 + 5;
    return number;
}

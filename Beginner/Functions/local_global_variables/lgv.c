/*
Author: Ryan Camp
Purpose: Learn about local and global variables in c language
Date: 10-27-2020
*/

/*
NOTES: 
    - local variables are local to which block of code they are in.

    - global variables can be accessed in any block.

    - You should avoid global variables as much as possible,
        - it promotes dependencies.
        - Hard to find and fix bugs when you use a global variable in multiple places.
        - it promotes coupling of different functions.

    - use parameters in functions instead
        - if a lot of data, use a struct

*/

#include <stdio.h>

//declare global variable
int myGlobalVariable; //global

int main(void) {
    int myLocalMain = 0; local variable     
    //I can access myLocalMain and myGlobalVariable.
    return 0;
}

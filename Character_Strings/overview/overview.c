/*
Author: Ryan Camp
Purpose: An overview of the character string section of the course
Date: 10-30-2020
*/

/*
Notes:
    - Single character is char: 'A', 'B', 'C'
        - single quotes.

    - String is multiple characters "ABC"
        - double quotes.

    - "This is a string literal / constant"

    - You can escape characters in the string with the "\" forward slash
        - Example "For\" you write \\\"."
            - this will print out as (For" you write \".) to the terminal.

    - '\0' is called null terminator.
        - added to the end of each string so compiler knows where it stops.
            - so... the array size always needs to be one more than what you wish to store.

*/

#include <stdio.h>

int main(void){

    printf("For\" you write \\\".\n");

    printf("The character \0 is used to terminate a string."); // you should only see "The character" printed to the screen
    return 0;
}

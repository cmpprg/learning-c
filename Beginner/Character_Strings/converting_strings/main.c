/*
Author: Ryan Camp
Purpose: Learn about converting strings
Date: 10-30-2020
*/

/*
NOTES:
    - All from stdlib.h

    - common to convert to all lower or uppercase.
        - toupper()
        - tolower()
        - to be used on each char not on a string.
        - returns the ascii value, so you need to type cast to (char)

    - convert strings to other data types
        -atof() converts ascii to float
        -atoi() converts ascii to integer
        -atol() converts ascii to long
        -atoll() converts ascii to long long
        -itoa() converts integer to ascii
        -strtod() converts string to double
        -strtof() converts string to float
        -strtold() converts string to long double
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while(true){
        value = strtod(pstr, &ptr);
        if(pstr == ptr)
            break;
        else{
            printf(" %f\n", value);
            pstr = ptr;
        }
    }
    return 0;
}

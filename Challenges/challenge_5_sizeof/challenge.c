/*
Author: Ryan Camp
Purpose: Print the byte size of the basic data types.
Date: 10-24-2020
*/

/*
Display the byte size of basic data types in C.

- int
- char
- long
- long long
- double
- long double

*/

#include <stdio.h>

int main()
{
    printf("- int takes up %zd bytes of memory\n", sizeof(int));
    printf("- char takes up %zd bytes of memory\n", sizeof(char));
    printf("- long takes up %zd bytes of memory\n", sizeof(long));
    printf("- long long takes up %zd bytes of memory\n", sizeof(long long));
    printf("- double takes up %zd bytes of memory\n", sizeof(double));
    printf("- long double takes up %zd bytes of memory\n", sizeof(long double));
    return 0;
}

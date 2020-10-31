/*
Author: Ryan Camp
Purpose: Learn about common string functions in C language
Date: 10-30-2020
*/

/*
Notes:
    - C provides a lot of functions to deal with functions.

    - strlen()
        - gets the length of a string
        - returned as a 'size_t' variable
        - does change the string, so don't use constants

    - strcpy() or strncpy()
        - copying one character string to another.
        - equivalient of an assignment for strings

            char s[100];
            strcpy(s, "This is the string that i wrote!")

        - strncpy() is safer as it asks for the maximum number of chars to copy.

        - strcpy() does not take this info, so might screw you if you put to big of a string in there.

    - strcat() and strncat()
        - combining two character strings together.
        - appends second arg to first arg.
        - combination becomes the new string
        - second string not altered.
        

    - strcmp() and  strncmp()
        - determining if two character strings are equal

    - All of these functions are included in the string.h file

    - 
*/

#include <stdio.h>
#include <string.h>

int main(void){
    //strlen()
    char string1[] = "Hello my name is Ryan Camp";
    int length1 = strlen(string1);

    printf("The size of string1 is %d\n", length1);

    //strcpy()
    char string2[100];
    strcpy(string2, "This is the string that i wrote!");

    printf("string2 = %s\n", string2);

    strcpy(string2, "Does not append to the end\n");

    printf("string2 now = %s", string2);

    //we should really be using strncpy() to avoid buffer overflow errors.
    char string3[] = "This is the nature of a string!\n";
    char temp[50];

    strncpy(temp, string3, sizeof(temp) - 1);

    printf("String 3: %s\n", temp);
    printf("Size of temp: %lu\n", sizeof(temp));
    printf("String Length of temp: %lu\n", strlen(temp));
    //strcat()
    char myString[] = "my string";
    char input[80];

    printf("Please type in what you would like to input: ");
    scanf("%s", input);

    printf("%s", strcat(input, myString));
    //We really should use strncat() to remove buffer overflow problems. 

    //strcmp()

    char str1[] = "ABC";
    char str2[] = "ABC";
    char str3[] = "ABCD";

    printf("Compare str1 and str2: %d\n", strcmp(str1, str2));
    printf("Compare str1 and str3: %d\n", strcmp(str1, str3));
    printf("Compare str3 and str1: %d\n", strcmp(str3, str1));
    return 0;
}


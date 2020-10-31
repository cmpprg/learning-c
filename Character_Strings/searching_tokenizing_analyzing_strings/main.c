/*
Author: Ryan Camp
Purpose: Learn about searching, tokenizing, and analyzing strings.
Date: 10-30-2020
*/

/*
NOTES:

    - Again we will be working with the string.h

    - Searchin a String:
        - find a character with strchr()
            - first arg is string to search
            - second arg is char to search for
            - return the address for the first char match or NULL.
        - find a substring with strstr().
            - same as strchr() you just trade a char for a substring.

    - Tokenizing a String
        - a token is a sequence of character within a string that is bounded by a delimiter(space, comma, period)
        - breaking a sentence into words.
        - use strtok() for this purpose.
            - first arg string to be tokenized
            - second arg 

    - Analyzing strings
        - Islower(), isupper(), isalpha(), isdigit(), etc.

    - Pointer (Sneak Peak):
        - type of variable called pointer
        - stores an address in memory
        - usually in hexadecimal
        - we use pointer in scanf()
            
            int Number = 25;  // this is just an integer
            int *pNumber = &Number;  // this is the address of that integer.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    
    int Number = 35;
    int *pNumber = &Number;

    printf("Number: %d\n", Number); //represents data
    printf("pNumber: %p\n", pNumber); //represents the address where data is stored in memory.
    printf("*pNumber: %d\n", *pNumber); //goes through the address, dereferences, and pulls data from memory.

    //strchr
    // will return a pointer or NULL if it can't find anything
    char str[] = "The quick brown fox"; //string to search
    char ch = 'q'; //The character we are looking for
    char *pGot_char = NULL; //pointer initialized to NULL
    pGot_char = strchr(str, ch); // Stores address where ch is found

    //strstr
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);

    //strtok()
    char str2[] = "Hello how are you - my name is - Ryan";
    const char delimeter[] = "-";
    char *token;

    // get the first token
    token = strtok(str2, delimeter);
    printf("this is the first token: %s", token);

    // walk through other tokens
    while(token != NULL){
        printf(" %s\n", token);
        
        token = strtok(NULL, delimeter); 
    }
    return 0;
}

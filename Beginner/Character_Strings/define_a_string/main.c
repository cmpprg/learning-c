/*
Author: Ryan Camp
Purpose: Learn about defining character strings in the C language
Date: 10-30-2020
*/

/*
Notes:
    - C has no special vaiable type for strings
    - no special operators in the language for processing strings
    - Though there is a library that has an extensive range of functions to handle strings

    - srings are stroed in an array of type char
    
        char myString[20];

    - this can accomidate a string up to 19 characters. dont forget about the '\0' null character at the end.

    - Good practice to initialize a character array with what you need.

        char word[] = {'H', 'e', 'l', 'l', 'o', '!'};

    - if you want to initialize an char array and then assign data you have to use special function called strncopy();

        char s[];
        s = "Hello"  //this will not work.

    - Technicaly in the above example s is a pointer to the location of the char array.
        - this being said, when you use the scanf(), you don't need to specify address&

            scanf("%s", s);  // you don't need the & in front of the variable name.

    - scanf() on reads up to the first \n.

    - you can use gets() or get_s() to read in whole sentences.

    - you can not compare two strings(char arrays), you can not compare two arrays of any kind.

    - equality operator can only be used on simple types, floats, ints, chars. Does not work on structures or arrays.

    - to compare two strings you need to compare each element in both char arrays. or use the strcmp();

    - "X" is not the same 'X'
        - 'X' is a simple type char
        - "X" is a derived type, an array of char
        - "X" actually equals {'X', '\0'};


*/

#include <stdio.h>

int main(void){

    char word1[] = {'H', 'e', 'l', 'l', 'o', '!'};
    char word2[7] = {"Word2!"};

    char word3[6] = {"ToManyCharacters!"}; //this will not display properly.
    
    //These two are best practice:
    char word4[] = {"As many characters as I want! Let the compiler do the work."};
    //This is cleanest code.
    char word5[] = "Hello World!!!!";

    printf("%s\n", word1); 
    printf("%s\n", word2); 
    printf("%s\n", word3); 
    printf("%s\n", word4); 
    printf("%s\n", word5); 

    char str1[] = "To be or not to be";
    char str2[] = ", that is the question.";
    unsigned int count = 0;

    while(str1[count] != '\0'){
        ++count;
    }

    printf("The count of str1 is %d\n", count);

    for(int i = 0; str2[i] != '\0'; i++){
        ++count;
    }

    printf("The count of str1 and str2 together equal %d\n", count);
    return 0;
}

/*
Author: Ryan Camp
Purpose: challenge surrounding concepts of char arrays (strings)
Date: 10-30-2020
*/

/*
Notes:
    - Write function that counts number of characters in array.
        - Do not use strlen()
        - input char array
        - output int

    - Write a function to concatenate two character strings
        - Do not use strcat()
        - input: char result, const char str1[], const char str2[]
        - can return void
    
    - Write a funciton that determines if two strings are equal
        - Do not use strcmp()
        - input: const char str1[], const char str2[]
        - return boolean
*/

#include <stdio.h>
#include <stdbool.h>

int stringLength(const char string[]);
void stringConcat(const char string1[], const char string2[], char result[]);
bool stringCompare(const char string1[], const char string2[]);

int main(void){
    char str1[] = "Hello my name is Ryan Camp!";
    char str2[] = " Nice to meet you!";
    char str3[100];
    char str4[] = " Nice to meet you!";

    printf("The length of the string is: %i\n", stringLength(str1));

    stringConcat(str1, str2, str3);

    printf("The two strings together are: %s\n", str3);

    printf("Comparing 1 to 2 returns: %d\n", stringCompare(str1, str2));
    printf("Comparing 2 to 4 returns: %d\n", stringCompare(str2, str4));
    printf("Comparing 'hello' to 'Hello' returns: %d\n", stringCompare("hello", "Hello"));
   
    return 0;
}
/*
Name: String Length
Purpse: Find the length of a string and returns an integer with that value.
*/
int stringLength(const char string[]){
    int length = 0;

    while(string[length] != '\0')
        length++;

    return length;
}
/*
Name: String Concat
Purpose: Concatinates two strings and assignes new string to a different variable.
*/
void stringConcat(const char string1[], const char string2[], char result[]){
    int str1Length = stringLength(string1);
    int str2Length = stringLength(string2);
    int combinedLength = str1Length + str2Length;

    printf("Length of 1: %d\n", str1Length);
    printf("Length of 2: %d\n", str2Length);
    printf("Length of 3: %d\n", combinedLength);

    for(int i = 0; i < str1Length; i++){
        result[i] = string1[i]; 
    }

    for(int i = 0; i < str2Length; i++){
        result[i + str1Length] = string2[i];
    }

    result[combinedLength] = '\0';
}
/*
Name: Strin Compare
Purpose: Compares two strings to see if each character is equal
*/
bool stringCompare(const char string1[], const char string2[]){
    bool result = true;

    for(int i = 0; string1[i] != '\0' && string2[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            result = false;
            break;
        }
    }    

    return result;
} 


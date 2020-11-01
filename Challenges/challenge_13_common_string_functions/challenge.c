/*
Author: Ryan Camp
Purpose: Challenge 13 using common string functions
Date: 10-30-2020
*/

/*
NOTES:
    - Write a program that displays a string in reverse order
        - read input from keyboard
        - need strlen()

    - Write a program that sorts the strings of an array using a bubble sort
        - need to use strcmp() and strcpy()
        - look up and learn what a bubble sort algorithm is

            Input number of strings: (user input) 3

            Input 3 strings:

            zero
            one
            two

    - I am going to write functions instead of seperate programs!! R.C.
*/

#include <stdio.h>
#include <string.h>

void reverseDisplay(char str[]);
void sortArray(void);
int main(void){
    char reverseInput[41];
    
    printf("Please input a word, no more than 40 characters, you would like reversed: ");
    scanf("%s", reverseInput);

    reverseDisplay(reverseInput);

    printf("\n\n\n This is the sort section \n\n\n");

    sortArray();
    return 0;
}
//define functions
/*
Name: Reverse Display
Purpose: Display a word in reverse order.
*/
void reverseDisplay(char str[]){
    int strLength = strlen(str);
    char reverseString[strLength];

    for(int i = strLength - 1, j = 0; j < strLength; i--, j++){
        reverseString[j] = str[i];
    }

    reverseString[strLength] = '\0';
    
    printf("%s\n", reverseString);
}

/*
Name: Sort Array
Purpose: to sort array into ascending order.
*/
void sortArray(void){
    //intake number of strings and save to variable
    int quantityStrings = 0;
    printf("Input number of Strings: ");
    scanf("%d", &quantityStrings);

    //iterate and gather strings from user.
    char stringArray[quantityStrings][41];
    printf("Input string %d:\n", quantityStrings);

    for(int i = 0; i < quantityStrings; i++){
        scanf("%s", stringArray[i]);       
    }
    
    //bubble sort algorithm
    for(int i = 1; i < quantityStrings; i++){
        char subjectValue[41];
        int subjectIndex = i;
        int compareIndex = i - 1;

        while(strcmp(stringArray[subjectIndex], stringArray[compareIndex]) < 0){ 

            if(subjectIndex == 0){
                break;
            }

            strcpy(subjectValue, stringArray[subjectIndex]);
            strcpy(stringArray[subjectIndex], stringArray[compareIndex]);
            strcpy(stringArray[compareIndex], subjectValue);

            subjectIndex--;
            compareIndex--;
        }
    }

    //print results of sort
    for(int i = 0; i < quantityStrings; i++){
        printf(" %s\n", stringArray[i]);
    }
}

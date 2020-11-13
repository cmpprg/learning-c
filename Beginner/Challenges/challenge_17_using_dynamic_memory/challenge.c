/*
Author: Ryan Camp
Purpose: challenge 17 program that allows the user to input a text string and print it
Date: 11-5-2020
*/

/*
NOTES:
    - maybe use gets() or fgets()
    - program is going to print text that is given
    - you can ask the user to enter number that limits how big the string will be
    - should need only a char pointer, no char arrays

    -  
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char * input = NULL;
    int limit = 0;

    printf("What is the limit on the string you will input?\n ->> "); 
    scanf("%d", &limit);
    //this statement will eat the \n that is left by the scanf
    while ((getchar()) != '\n');
    
    input = (char *) malloc(limit * sizeof(char));

    if(!input){
        printf("There was a allocation error for the input variable!")
        exit(2);
    }
    printf("Please input the string you want regurgitated: ");
    fgets(input, limit, stdin);

    printf("\n  %s\n*****\n", input);

    free(input);
    return 0;
}


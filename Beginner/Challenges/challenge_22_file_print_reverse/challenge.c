/*
Author: Ryan Camp
Purpose: Challenge 22 print the contents of a file in reverse order
Date: 11-9-2020
*/

/*
Notes: 
    -  write a program that will print the contents of a file in reverse order.
        
*/

#include <stdio.h>

#define FILENAME "file.txt"

int main(void) {
    //declare variables
    FILE * filePtr = NULL;
    char ch = '\0';
    int fileSize = 0;

    //open file and error handling
    filePtr = fopen(FILENAME, "r");

    if(!filePtr) {
        perror("Error Opening File: ");
        return -1;
    }

    //find the end and store the size of file
    fseek(filePtr, -1, SEEK_END);
    fileSize = ftell(filePtr);
    
    //iterate backward through file printing char as we go
    for( ; fileSize >=  0; fileSize-- ){
        fseek(filePtr, fileSize, SEEK_SET);
        ch = fgetc(filePtr);
        printf("%c", ch);
    }

    printf("\n");

    //close file
    fclose(filePtr);
    filePtr = NULL;

    return 0;
}

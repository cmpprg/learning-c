/*
Author: Ryan Camp
Purpose: Challenge 20 
Date: 11-9-2020
*/

/*
Notes:
    - write a program to find the total nuymber of lines in a text file.

    
*/

#include <stdio.h>

int main() {
    //declare variables
    FILE * filePtr = NULL;
    int lineQty = 0;
    char character;
    

    //open file and verify
    filePtr = fopen("file.txt", "r");

    if(!filePtr) {
        perror("Error Opening File: ");
        return -1;
    }

    //loop through and increment lineQty
    while( (character = fgetc(filePtr)) != EOF ) {
        if( character == '\n' )
            lineQty++;
    }
    
    //close file connection
    fclose(filePtr);
    filePtr = NULL;

    //print results
    printf("There are %i lines in the file\n", lineQty);
    return 0;
}

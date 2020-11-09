/*
Author: Ryan Camp
Purpose: Challenge 21 conver files chars to uppercase
Date: 11-9-2020
*/

/*
Notes:
    - write a program that converts all characters of a file to uppercase and write the results out to a temporary file.
        then rename the temporary file to the original filename and remove the temporary file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file1.txt"
#define TEMPNAME "temp.txt"

int main() {
    //declare variables
    FILE * filePtr = NULL;
    FILE * tempPtr = NULL;
    char ch;
    char tempString[50];
    
    //connect files and handle errors
    filePtr = fopen( FILENAME, "r" );
    
    if(filePtr == NULL) {
        perror("Error Opening File: ");
        return -1;
    }

    tempPtr = fopen( TEMPNAME, "w+" );
    
    if(tempPtr == NULL) {
        perror("Error Opening File: ");
        return -1;
    }

    //iterate over file1, uppcase letter, and fputc to file2
    while( (ch = fgetc(filePtr)) != EOF ) {
        fputc(toupper(ch), tempPtr);
    }

    //rewind tempPtr file
    rewind(tempPtr);

    //print out temp file
    while( fgets(tempString, 50, tempPtr) ){
        printf("%s", tempString);
    }

    //close connections
    fclose(filePtr);
    fclose(tempPtr);
    filePtr = NULL;
    tempPtr = NULL;

    //rename temp to original name and remove original
    if( rename(TEMPNAME, FILENAME) == 0 ){
        printf("File renamed successfully :)\n");
    } else {
        printf("Error renaming file :(\n");
    }
    
    
    return 0;
}

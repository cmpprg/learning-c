/*
Author: Ryan Camp
Purpose: to learn about reading from a file in C language
Date: 11-8-2020
*/

/*
NOTES:
    - fgetc() - read a char from a txt file that has been opened for reading "r"
        - takes a file pointer as its only arg and returns the char read as type int
        
        int mchar = fgetc(filePtr);

    - you can read the contents of a file again when necessary
        -the rewind() function positions the file that is specified by the file pointer argument at the beginning

        rewind(filePtr);

    - you can use the fgets() function to read strings from any file or stream

        char * fgets(char * str, int nchars, FILE * stream);

    - the function read a string into the memory area pointed to by str, from the file specified by stream
        - characters are read until either a '\n' is read or nchars-1 characters have been read from the stream, whichever comes first

    - if a newline character is read, it's retained in the string
        - a '\0' character will be appended to the end of the string

    - if there is no error, fgets() returns the pointer, str
    
    - if there is an error, NULL is returned

    - reading EOF causes NULL to be returned.  

    - fscanf(): reads in formatted data
        - int fscan(FILE * stream, const char * format);
    
        - first arg is the pointe to a FILE object to read from

        - second arg is a const string of format specifiers
            - third is a list of pointers where to store what is being read in.
*/

#include <stdio.h>

int main(){

    //declare variables and pointers
    FILE *fp = NULL;
    int c;
    
    //open file, connect to stream
    fp = fopen("myFile.txt", "r");

    //error handling
    if(fp == NULL){
        perror("Error in opening file: ");
        return(-1);
    }

    //read a single char at a time from file until end
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;
    
    printf("\n\n\n\t ..........This is a transition between reading char by char and reading strings..........\n\n\n\n");

    char str[60];

    //open file for reading
    fp = fopen("myFile.txt", "r");

    //error handling
    if(fp == NULL){
        perror("Error opening file: ");
        return -1;
    }

    //read file
    while( fgets(str, 60, fp) != NULL){
        printf("%s", str);
    }

    printf("\n");
    //close connection
    fclose(fp);
    fp = NULL;

    printf("\n\n\n\t ..........This is a transition between reading fgets() and fscanf()..........\n\n\n\n");

    char str1[10], str2[10], str3[10];
    int year;

    //open / connect file with input stream
    fp = fopen("file.txt", "w+");

    if(fp)
        fputs("We are in 2020", fp);

    rewind(fp);    

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);

    fclose(fp);
    fp = NULL;
    return 0;
}


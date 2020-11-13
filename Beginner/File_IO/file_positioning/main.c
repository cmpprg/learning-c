/*
Author: Ryan Camp
Purpose: Learn about file positioning in C language 
Date: 11-8-2020
*/

/*
Notes: 
    - for many applications, you need to be able to access data in a file other than sequential order

    - there are various functions that yo can use to access data in random sequence

    - there are two aspects to file positioning
        - where you are
        - where you want to move to

    - you can access a file at a random position regardless of whether you opened the file

    - two function that tell you where you are:
        - ftell()
        - fgetpos()

        long ftell(FILE * stream) //declaration

        - takes a FILE object
        - returns the char position in the file

        long fpos = ftell(filePointer); //usage

    - the fpos variable now hold the current positin in the fie and you can use this to return to this position at any time
        - value is th offset in bytes from the beginning of the file

    - ...fgetpos()...

    - a little more complicated

        int fgetpos(FILE * stream, fpos_t * position)

    - first arg is file pointer
    - second arg is pointer to a type that is defined in stdio.h
        - fpos_t - a type that is able to record every position within a file

    - the fgetpos() function i designed to be used with the positioning function fsetpos()

    - the fgetpos() function stores the current pos and file state info for the file in position and returns 0 if the operation successful
        - returns a nonzero int value for failure

        fpos_t here;
        fgetpos(pfile, &here);

        - this will record current pos in 'here' var
        - you must declare a variable of type fpos_t
            - cannot declare pointer of type fpos_t* because we need memory allocated

    - as a compliment to ftell() you have fseek()
        
        int fseek(FILE * stream, long offset, int origin)

        - the first param is FILE object
        - second and third params define where you want to go
            - second is an offset from a reference point specified by third param
            - reference point can be one of three values
                - SEEK_SET - beginning of file
                - SEEK_CUR - current position
                - SEEK_END - EOF

    - fsetpos() function works hand in hand with fgetpos()

        fsetpos(pfile, &here) 
*/

#include <stdio.h>

int main() {
    //for ftell()    
    FILE * fp = NULL;
    int length = 0;

    fp = fopen("file.txt", "r");

    if( !fp ){
        perror("Error opening file: ");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    length = ftell(fp);

    fclose(fp);
    fp = NULL;

    printf("Total size of file.txt = %d bytes\n", length);

    //for fgetpos()
    fpos_t position;

    fp = fopen("file2.txt", "w+");

    if( !fp ){
        perror("Error opening file: ");
        return -1;
    }

    fgetpos(fp, &position);
    printf("before puts position = %lli\n", position);

    fputs("Hello, World!", fp);

    fgetpos(fp, &position);
    printf("after puts position = %lli\n", position);

    fclose(fp);
    fp = NULL;

    // example of fseek()

    fp = fopen("file3.txt", "w+");

    if( !fp ){
        perror("Error opening file: ");
        return -1;
    }

    fputs("This is Ryan", fp);

    fseek(fp, 7, SEEK_SET);
    fputs(" Hello how are you", fp);

    fclose(fp);
    fp = NULL;
    return 0;
}

/*
Author: Ryan Camp
Purpose: To learn about writing to files in C language
Date: 11-9-2020
*/

/*
Notes:
    - ...fputc()...

    - The simplest wrtie operatin is provided by the function fputc()
        - writes a single character to a text file.

        int fputc(int ch, FILE * pfile);

        - the function wrtites the char specified by the first arg to the file identified by the second arg
            - returns the char that was written if successful
            - returns EOF if failure

        - In practice chars are not usually written to a physical file one by one
            - extrememly inefficient

        - putc() sam as fputc()
            - requires same args and returns the same
            - difference between them is that putc() mah be implemented in stdlib as a macro, whereas fputc() is a function

    - ...fputs()...

    - you can use the fputs() function to write string to file or stream
    
        int fputs(const char * str, FILE * pfile);

        - first arg is a pointer to the char string
        - second arg is file pointer

    - this function will write characters from a string until it reaches a '\0' char
        - does not write the null terminator character to the file
            - can complicate reading back variable-length strings from a file that have been written by fputs()
            - expecting to write a line of text that has a newline character at the end

    - ...fprintf()...

    - the standard function for formatted output ot a stream

        int fprintf(FILE * stream, const char * format, ...);

        - first arg to this function is the pointer to a FILE object

        - secod arg is format specifier
    
    - if successful, the total number of chars written is returned otherwise, a negative number is returned.
 
*/

#include <stdio.h>

int main() {
    
    // for fputc()
    FILE * fp = NULL;
    int ch = 0;

    fp = fopen("file.txt", "w+");
    
    if(!fp) {
        perror("File Opening Error: ");
        return -1;
    }

    for( ch = 33; ch <= 100; ch++ ) {
        fputc(ch, fp);
    }

    fclose(fp);
    fp = NULL;
 
    //for fputs()
    
    fp = fopen("file2.txt", "w+");

    if(!fp) {
        perror("File Opening Error: ");
        return -1;
    }

    fputs("Ryan is the man", fp);
    fputs("What did he just say?", fp);

    fclose(fp);
    fp = NULL;

    // for fprintf()

    fp = fopen("file3.txt", "w+");

    if(!fp) {
        perror("File Opening Error: ");
        return -1;
    }

    fprintf(fp, "%s %s %s %s %d\n", "Hello", "my", "name", "is", 33088);

    fclose(fp);
    fp = NULL;
    return 0;
}

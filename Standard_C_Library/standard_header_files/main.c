/*
Author: Ryan Camp
Pupose: Notes on the standard header files for C language
Data: 11-9-2020
*/

/*
Notes:
    - <stddef.h>
        - NULL : A null pointer constant

        - offsetof (structure, member) : The offset in bytes of the member from the start of the structure, result = size_t

        - ptrdiff_t : The type of int profuced by subtracting two pointers

        - size_t : The type of integer produced by the sizeof operator

        - wchar_t : The type of int required to hold a wide character.

    - <limits.h>

    - <stdbool.h>
        - bool : substitute name for the basic _Bool data type
        - true : Defined as 1
        - false : Defined as 0

    FUNCTIONS

        - <string.h>
            - char * strcat()
            - char * strcpy()
            - size_t strlen()
            - char * strchr()
            - int strcmp()
            
            - char * strncat()
            - int strncmp()
            - char * strncpy()
            - char * strrchr() : last occurance
            - char * strstr()
            - char * strtok

        - <ctype.h>
            - isalnum
            - isalpha
            - isablank
            - iscntrl
            - isdigit
            - isgraph
            - islower
            - isspace
            - ispunct
            - isupper
            - isxdigit

            - tolower()
            - toupper()
    
    IO FUNCTIONS

        - <stdio.h>
            - EOF, NULL, stdin, stdout, sterr, and FILE

            - fopen()
            - fclose()
            - feof()
            - fflush()

            - fgetc()
            - fgetpos()
            - fsetpos()
            - fgets()
            - fprintf()
            - fputc()
            - fputs()
            - fscanf()
            - fseek()
            - ftell()
            - printf()
            - remove() : delete file
            - rename() : rename one file to another file
            - scanf()

    CONVERSION 

        - <stdlib.h>
            - atof()
            - atoi()
            - atol()
            - atoll()

    MEMORY

        - <stdlib.h>
            - calloc(n, size)
            - malloc(size)
            - realloc()
        
            - free()
*/

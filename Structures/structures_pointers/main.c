/*
Author: Ryan Camp
Purpose: learn about structures and pointers
Date: 1-6-2020
*/

/*
Notes:
    - C allows for pointers to structures
    
    - pointers to structs are easier to manipulate than structures themselves

    - in some older implementations, a structure cannjot be passed as an arg to a function, 
        but a pointer to a structure can

    - even if you can pass a structure as an arg, passing a pointe is more efficient

    - many data representations use structures containing pointers to other structures

    - Define a variable to be a pointer to a struct

        ...ASSUME WE ALREADY DEFINED STRUCT FOR DATE...

        struct date *datePtr = NULL; //create pointer

        struct date todaysDate = {11, 6, 2020};

        datePtr = &todaysDate;  //assignment

        ....ACCESS....

        (*datePtr).day = 21;

    - IMPORTANT to remember that '.' structure union access operator has higher precidence than '*' indirection operator
        - this being said, if you... 

        *datePtr.day = 21; 

        - ... without parenthesis we would endup trying to access the address instead of the dereferenced pointer.

        if( (*datePtr).month == 12 ){
            ...do something...
        }

    - pointers to structures are so often used in C that a special operator exists
        - the structure pointer operator '->', whiis the dash followed by the greater than sign, permits

        if( datePtr->month == 12 ){
            ...do something...
        }

    - STRUCTURES THAT CONTAIN POINTERS 
        
        struct intPtrs{
            int *p1;
            int *p2;
        }

        struct intPtrs pointers;

        - you will still access pointers as any other struct.

    - STRUCTURES THAT CONTION CHAR ARRAYS / CHAR POINTERS

        struct names{
            char first[20];
            char last[20];
        };

        .....OR.....

        struct pnames{
            char * first;
            char * last;
        };

    - the struct names
        - strings are stored inside the structure when instantiated
        - structure has allocated a total of 40 bytes to hold the two names 

    - the struct pnames
        - strings are stored wherever the compiler stores string constants
        - the struct holds the two addresses, which takes a total of 16 bytes on our system
        - the struct pnames structure allocates no space to store strings
        - it can be used only with strings that have had space allocated for them elswhere
            - such as string constants or string arrays

        - pointers in a pnames structure should be used only to manage strings that were created and allocated elsewhere in program

     
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 20
struct date{
    int month;
    int day;
    int year;
};

struct intPtrs{
    int *p1;
    int *p2;
};

struct names{
    char first[20];
    char last[20];
};

struct pnames{
    char * first;
    char * last;
};

struct namect{
    char * fname;
    char * lname;
    int letters;
};

int main(){
    printf("-----------POINTER TO A STRUCT----------\n");
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 11;
    datePtr->day = 6;
    datePtr->year = 2020;

    printf("Today's date is %i/%i/%.2i.\n", today.month, datePtr->day, datePtr->year % 100);

    printf("----------------------------------------\n");
    printf("-----STRUCT THAT CONTAINS POINTERS------\n");

    struct intPtrs pointers;
    int num1 = 100, num2 = 0;

    printf("num1 = %i\n", num1);
    printf("num2 = %i\n", num2);

    pointers.p1 = &num1;
    pointers.p2 = &num2;
    *pointers.p2 = -97;

    printf("num1 = %i : pointer of num1 = %i\n", num1, *pointers.p1);
    printf("num2 = %i : pointer of num2 = %i\n", num2, *pointers.p2);
    
    printf("-----------------------------------------\n");
    printf("--------CHAR ARRAYS VS CHAR POINTERS-----\n");

    struct names veep = {"Talia", "Summers"};
    struct pnames treas = {"Brad", "Fallingjaw"};

    printf("%s and %s\n", veep.first, treas.first);
    printf("sizeof veep: %lu\n", sizeof(veep));    
    printf("sizeof treas: %lu\n", sizeof(treas));    

    
    return 0;
}

void getInfo(struct namect * pst){

    char temp[SLEN];
    printf("Please enter your first name.\n");
    fgets(temp, SLEN, stdin);

    //allocate mem to hold name
    pst->fname = (char *)malloc(strlen(temp) + 1);

    //copy name to allocated memory
    strcpy(pst->fname, temp);

    printf("Please enter your last name.\n");
    fgets(temp, SLEN, stdin);
    
    pst->lname = (char *)malloc(strlen(temp)+ 1);
    strcpy(pst->lname, temp);
}

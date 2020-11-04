/*
Author: Ryan Camp
Purpose: Learn pointers relative to strings in C language
Date: 11-3-2020
*/

/*
NOTES:
    - we can easily traverse a string using char pointers

    - 
*/

#include <stdio.h>
#include <stdlib.h>
//the array version
void copyString(char to[], char from[]);
//the pointer version
void copyStringP(char *to, char *from);
int main(void){

    
    return 0;
}

//the array version
void copyString(char to[], char from[]){
    int i;

    for(i = o; from[i] != '\0'; ++i) 
        to[i] = from[i];
    
    to[i] = '\0';
}

//the pointer version
void copyStringP(char *to, char *from){
    for(; *from != '\0'; ++from, ++to) 
        *to = *from;
    
    *to = '\0';
}
 

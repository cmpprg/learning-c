/*
Author: Ryan Camp
Pupose: Learn about pointers and const
Date: 11-3-2020
*/

/*
NOTES:
    - const modifier tells compiler that the variable will not be changed by the program
    - with pointers we need to consider two things
        - are we saying that the pointer will not be changed
        - are we saying the the value pointed to will not be changed.

    - value not changed?

        long value = 999L;
        const long *pvalue = &value; 

        - you can not use *pvalue to change value.
        - but, you can stil change 'value' variable directly. // weird huh...
        - so... you just can't use the pointer to make the change.
        - you can also change the address attached to pointer.

    - address not changed?
        
        int count = 43;
        int * const pcount = &count;
    
        - ensures that the address this pointer points to will not change.
        - ensures that pointer always points to same thing.
        - you can still change value though
        
            *pcount = 443; // still works!

    - both?

        int item = 59;
        const * const pitem = &item; 
        
        - can't change pitems value(item's address) or value of item(dereferenced pitem).
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){

    return 0;
}

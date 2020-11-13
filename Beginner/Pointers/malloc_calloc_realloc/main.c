/*
Author: Ryan Camp
Purpose: To learn about malloc(), calloc(), realloc()
Date: 11-5-2020
*/

/*
NOTES:
    .....MALLOC()......

    - simplest library function that allocates memory at runtime is called malloc()
        - include <stdlib.h>
        - you specify the number of bytes of memory that you want allocated as the argument
        - returns the address of the first byte of memory that it allocated
        - because you get an address, a pointer is the only place to put it.

            int * pNumber = (int*)malloc(100); <---- not great, assumes that all systems work on ints of  a certain size

            int * pNumber = (int *)malloc(25 * sizeof(int)); <---- better...


            - malloc will return a void type pointer is you do not cast it (int *), (char *), ...
            - if memory that you requested can not be allocated for any reason
                - malloc() returns a pointer with NULL.
                - good idea to check dynamic memory request immediately using an if statement to make sure the memory is actually there.
            
                    int * pNumber = (int *)malloc(25 * sizeof(int));
                    if(!pNumber){
                        //CODE TO DEAL WITH MEMORY ALLOCATION FAILURE.
                    }                    

                - Let the program fail gracefully, write your own message and exit. Don't let your program crash.

                - when you allocate memory dynamically, you should always release the memeory when it is no longer required

                - memory that you allocate on the heap will be auto release when your program ends
                    - better to explicitly release the memory when you re done with it. Try not to let the program implicitly do it. Be responsible

                - Memory leak occurs when you allocate some memory dynamically and you do not retain the reference to it
                    so you are unable to release it
                    - often occurs in a loop
                    - your program consumes more and more of the available memory on each loop iteration and eventually may occupy it all

                - to free memory that you have allocated dynamically, you must still have access to the address that references the block of memory.

                - TO FREE MEMORY ALL YOU HAVE TO DO IS CALL THE free() located in <stdlib.h>
        
                    free(pNumber);
                    pNumber = NULL;

                - free() has a formal parameter of void *, so you can pass any pointer type.

                - set pointer to NULL after to indicate that space has been freed.


    .....CALLOC().....

        - calloc() offers a couple advantages over malloc()
            - it allocates memory as a number of elements of a given size
            - it initializes the memory that is allocated so that all bytes are zero
            
        - calloc() functin requires two arg values
            - number of data items for which space is required
            - size of each data item

        - also a part of <stdlib.h>

            int * pNumber = (int *)calloc(75, sizeof(int));

        - return value will also be NULL if incapable of allocation. 


    .....REALLOC().....  
    
        - realloc() enables you to reuse or extend memory tht you previously allocated using malloc() or calloc()
        
        - expects two args
            - a pointer containing address that was previously dynamically allocated
            - the size in bytes of the new memory that you want allocated
        
        - allocates the amount of memory you specify by the second argument
            - transfers the contents of the previously allocated memory referenced by the pointer to the newly allocated memory
            - returns a void pointer to the new memory or NULL if the operation fails for some reason.

        - the most important feature of this operation is that realloc() preserves the contents of the original memory area

.................
    - Avoid allocating lots of small amounts of memory
        - allocating memory on the heap carries soe overhead with it
        - allocating many small blocks of memory will carry much more overhead than allocating fewer larger blocks

    - only hang on to the memory as lng as you need it
        - as soon as you are finished with a block of memory on the heap, relese the memory 

    - always ensure that you provide for releasing memeory that you have allocated
        - decide where in your code you will release the memory when you write the code that allocates it

    - The function that creates it should be the function that releases it

    - make sure you do not inadvertently overwrite the address of memory you have allocated on the heap before you have release it
        - will cause memory leak
        - be especially careful when allocating memory withing a loop
        
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *str;
    char * str2;

    /* Initial memory allocation */
    str = (char *) malloc(15);
    str2 = (char *) malloc(1);
    strcpy(str, "tutorialspoint");
    printf("String = %s,  Address = %u\n", str, str);

    /* Reallocating memory */
    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s,  Address = %u\n", str, str);

    free(str);
    free(str2);
   
    return(0);
}

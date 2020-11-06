/*
Author: Ryan Camp
Purpose: To learn about dynamic memory allocation in C language
Date: 11-5-2020
*/

/*
Notes:
    - when you define vaiable in C, the compiler automatically allocates the correct amount ofstorage for yo based on the data type
    - the same for creating pointers

    - dynamic allocation of memory is when you create a pointer and don't want to assign a preexisting variable address.
        - you would dynamically allocate memory for it in that case

    - it is frequently desirable to be able to dynamically allocte storage while a program is running.

    - if you have a program that reads in a set of data from a file into an array in memory, you have 3 options:
        (1) - define the array to contain the maximum number of possible elements at compile time
            
                int dataArray[1000];
            
                - this is a fixed size array
                - The data file can not contain more than 1000 elements, if it does, program will not work
                    - if it is larger than 1000 uyou must go back to the program, change size and recompile it.
                    - no matter what value you selectk, you always have the chance of running into the same problem again in the future.
                    - higher maintenance

        (2) - use a variable-length array to dimension the size of the array at runtime

        (3) - allocate the array dynamically using one of C's memory allocation routines
                - using dynamic memory allocation functins, you can get storage as you need it.
                    - this approach enables you to allocate memory as the program is executing.
                - dynamic memory allocation is dependent on the concept of a pointer and provides a strong incentive to use pointers in your code
                - allows memory for storing data to be allocated dynamically when your program executes
                    - ONLY POSSIBLE WITH POINTERS
                - Majority of production programs use dynamic memory allocation.
                - Allows you to create pointers at runtime that are just big enough for the task at hand, no wasted memory
        

    - Heap vs Stack:
        - dynamic mem allocation reserves space in a memory area called the heap.
        - The heap is a more flexible memory location.
        - the memory in the heap is controlled by the programmer instead of the program
            - when you allocated memory on the heap, it is up to you to keep track of when the memory you have allocated is no longer required
            - you must free the space you have allocated to allow it to be reused.
        
        - the stack is another place where memory is allocated
            - function arguments and local variables in a function are stored here
            - when the execution of a function ends, the space allocated to store arguments and local variables is freed.
*/

#include <stdio.h>

int main(void){

    return 0;
}

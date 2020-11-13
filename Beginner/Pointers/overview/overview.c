/*
Author: Ryan Camp 
Purpose: Overview of pointers in the c language
Date: 11-2-2020
*/

/*
NOTES:
    - Indirection
        - everyday life
        - need to buy something new, you need to go thru purchasing, so you call dept and have them order it.

    - in programming languages, indirection is the ability to reference something using a name, reference or container, instead of the value iteself
        - variables
        - manipulating a value through its memeory address
            
    - A pointer provides an indirect means of accessing the value of a particular data item
        - a variable whose vLUE IS A MEMEORY ADDRESS
        - its value is the address of another location in memory that can contain a value

    - Good reasons to use pointers in C:
        - one of the most powerful tools in C language.
        - it is important you get this concept figured out in the beginning and mintain a clear idea of what is happening as you dig deeper

    - compiler must know the type of data stored in the variable to which it points
        - need to know how much mem is occupied or how to handle the contents of the memory to which it points
        - pointers of type int can only point to ints, floats to floats

    - POINTERS CAN ONLY STORE ADDRESS' OF DATA 

    - Accessingdata by means of only variables is very limiting.
        - with pointers you can access any location (you can treat any position of memeory as a variable for example)
            and perform arithmetic with pointers.
    - pointers in C make it easier to use arrays and strings

    - pointers allow you to refer to the same space in memory from multiple locations.
        - means that you can update memory in one lacation and the change can be seen from another location in your program
        - can also save space by being able to share components in your data structures.

    - pointers allow functions to modify data passed to them as variables
        - pass by reference - passing arguments to function in way they can be changed by function.

    - can also be used to optimize a program to run faster or use less memory than it would otherwise

    - pointers allow us to get multiple values from the function
        a function can return only one value but by passing arguments as pointers we can get more than one value from the pointer.

    - with pointers dynamic memory can be created according to the program use
        -we can save memory from static (compile time) declarations. 

    - pointers allow us to design and develop complex data structures like a stack, queue, or linked list

    - pointers provide direct memory access 
*/

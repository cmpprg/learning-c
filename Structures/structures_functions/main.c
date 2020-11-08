/*
Author: Ryan Camp
Purpose: To learn about functions relative to structues in C language
Date: 11-7-2020
*/

/*
Notes:
    
    struct Family{
        char name[20];
        int age;
        char father[20];
        char monther[20];
    };

    bool siblings(struct Family member1, struct Family member2){
        if(strcmp(member1.mother, member2.mother) == 0)
            return true;
        else
            return false;
    }


    - It is important to remember the pass by value copies data into the function for use.
        - This being said it is probably better and more efficient to use pointers to pass to functions

    - pointers to structures avoid the memory consumption and the copying time(only copy of the pointer(address) is made)


    bool siblings(struct Family *pmember1, struct Family *pmember2){
        if(strcmp(member1->mother, member2->mother) == 0)
            return true;
        else
            return false;
    }


    - RETURNING A STRUCTURE FROM A FUNCTION 

        struct Date my_function(void);

        - this is a prototype for a function taking no arguments that returns a sructure of a type Date

        - this allows us to return multiple values of various types from a function

    - it is often more convenient to return a pointer to a structure
        - when returning a pointer to a strucutre, it should be created on the heap

    - Passing pointers works on older C implementations as well, and saves you time copying the data necessary.
        - so... pass pointers not structures
        - though, this gives you direct access to change the original data. So use the const qualifier to protect when not necessary to change.    
*/

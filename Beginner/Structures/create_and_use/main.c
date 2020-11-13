/*
Author: Ryan Camp
Purpose: To learn about creating and using structures in C language
Date: 11-6-2020
*/

/*
Notes:
    - Structures allow you to group items together
    - a powerful concept that you will use in many C programs that you develop
        - basically an object, but no behavior

    - Date in a program has 3 variables:

        int month = 9, day = 25, year = 2020;

    - suppose your program also needs to store the date of purchase of a particular item
        - you must keep track of three separate variables for each date that you use in the program
        - these variables are logically related and should be grouped together
    
    - it would be much better if you could somehow group these sets of variables together 
        - this is precisely what the structure in C allows for.

    - Create a Structure In C:
        - a structue declaration is how a structure is put together 
            - what elements(members) inside the structure

        ....DEFINE....

            struct date{
                int month;
                int day;
                int year;
            };

        ..............

        - no memory at this point

        - can have different data types

        - definition of date defines a new type in the language
            - variables can now be declared to be of type struct date
        
        ....DECLARE....

            struct date today;

            struct date purchaseDate;

        ...............

        - the above statement declares a variable to be of type struct date
            - memory is now allocated for the variables above
            - memory is allocated for three integer values for each variable

    - Access Members is a Struct:

        - structure variable name is not a pointer
            - you need special syntax

        - you refer to a member of a structure by writing the variable name, followed by a period, followed by member name
            - period called the member selection operator / dot operator
            - no spaces permitted

            today.day = 26;
            today.year = 2020;

            if( today.month = 12 ){
                nextMonth = 1;
            }

        - since today.year is an int, you can perform all the same calculations you would.

        - There are variations to defining a struct:

            struct date{
                int month;
                int day;
                int year;
            } today;

            - this allows you to instantiate a variable(instance) 'today' of type 'struct date' all in the same go.

            - YOU CAN CREATE A ANONYMOUS STRUCT:
            
            struct{
                int month;
                int day;
                int year;
            } today;

            - this is limited because you have to instantiate every instance right here.

        - INITIALIZING STRUCTURES:

            - members are listed in a pair of braces, just like array
            - initial members must be constants (no variables)

                struct date today = {11, 6, 2020};

                struct date today = {11, 6};

                struct date today = {.month = 11, .day = 6, .year = 2020};

                struct date today = {.year = 2020};

            - all of these are acceptable initializations

        - ASSIGNMENT WITH COMPOUND LITERALS:

            struct date today;

            ... some program stuff...

            today = (struct date){11, 6, 2020};
    
            today = (struct date){.month = 11, .day = 6, .year = 2020};

            - kind of like type casting................

 
 
*/

#include <stdio.h>

int main(){

    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 11;
    today.day = 6;
    today.year = 2020;

    printf("Tdoay is %i-%i-%i\n", today.month, today.day, today.year % 100); 

    int century = today.year / 100 + 1;

    printf("We are in the %dst century\n", century);
    return 0;
}

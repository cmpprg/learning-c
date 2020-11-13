/*
Author: Ryan Camp
Purpose: Learn about structures and arrays
Date: 11-6-2020
*/

/*
Notes:
    - You can create arrays of structures, or structures that have member arrays

        struct date myDates[10]

        - creates 10 date structs and stores them in an array.

    - to set the 2nd date to March 30, 1988

        mayDates[1].month = 3;
        mayDates[1].day = 30;
        mayDates[1].year = 1988;

    - Initializing arrray of structs:

        struct date myDates[5] = {
            {12, 10, 1975},
            {2, 19, 1992},
            {3, 20, 1988}
        };

    
        struct date myDates[5] = {
            [2] = {3, 30, 1988}
        };

    - structs containing arrays 

        struct month{
            int numberOfDays;
            char name[3];
        };

        - ACCESS

        struct month aMonth;
        aMonth.numberOfDays = 31;
        strcpy(aMonth.name, "Jan");

*/

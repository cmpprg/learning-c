/*
Author: Ryan Camp
Purpose: Learn about nested structures in C language
Date: 11-6-2020
*/

/*
Notes:
    - nested structures = structures inside structures

        struct date {
            int month;
            int day;
            int year;
        };
        
        struct time {
            int hours;
            int minutes;
            int seconds;
        };

    - how to group date and time together.

        struct dateTime {
            struct date sDate;
            struct time sTime;
        };

    - we now have a convenient way of storing date and time for say an event 

        struct dateTime event;

        event.sDate.month = 10;
        event.sDate.day = 20;
        event.sDate.year = 2020;
        event.sTime.hours = 9;
        event.sTime.minutes = 30;
        event.sTime.seconds = 20;

        .....OR.....

        struct dateTime event = {{10, 20, 2020}, {9, 30, 20}};

        .....OR.....

        struct dateTime event = {
            {.month = 10, .day = 20, .year = 2020},
            {.hours = 9, .minutes = 30, .seconds = 20}
        };

    - Array of Nested Structures

        struct datTime events[100];

    - set 2nd time in array to noon

        events[1].sTime.hour = 12; 
        events[1].sTime.minutes = 0;
        events[1].sTime.seconds = 0; 

    - declaring a structure within a structure

        struct Time {
            struct Date{
                int day;
                int month;
                int year;
            } dob;
            
            int hour;
            int minutes;
            int seconds;
        };

        struct Time today;

        today.dob.day = 30;
*/

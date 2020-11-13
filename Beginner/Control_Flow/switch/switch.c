/*
Author: Ryan Camp
Purpose: learn about switch statements in c language
Date: 10-25-2020
*/

/*
sometimes a program needs to choose one of several alternatives. 
this is were the switch statements comes in.

This can be done with if / else if/ else statements, but is cleaner to implement with switch.

keywords:
    - switch
    - case
    - break

switch (expression) {
    case value 1:
        program statement;
        ...;
        break;
    case value 2:
        program statement;
        ...;
        break;
    case value 3:
        program statement;
        ...;
        break;
    default:
        program statement;
        ...;
        break;

    - don't forget your break statement or program will fall through to the next case;
}

    goto statement:
        - goto and a label name
    goto label;



    label: statement
*/

#include <stdio.h>

int main() {
    
    enum Weekday { Monday, Teusday, Wednesday, Thursday, Friday, Saturday, Sunday };
    enum Weekday today = Thursday;

    switch (today) {
        
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case teusday:
            printf("today is teusday\n");
            break;
        case wednesday:
            printf("today is wednesday\n");
            break;
        case thursday:
            printf("today is thursday\n");
            break;
        case friday:
            printf("today is friday\n");
            break;
        case saturday:
            printf("today is saturday\n");
            break;
    }

    return 0;
}

/*
Author: Ryan Camp
Purpose: Convert minutes to years and days.
Date: 10-24-2020
*/

/*
use scanf() to ask the user to enter a number of minutes from terminal.

program display as output the minutes and then its equivalent in years and days.

variables:
- minutes(int)
- minutes in year(int)
- years(double)
- days(double)

*/

#include <stdio.h>

int main()
{
    // declare minutes variable. (int) 
    long minutes;
    // intake user input and assign.
    printf("How many minutes would you like to calculate?\n>>");
    scanf("%li", &minutes);
    
    // declare years and days variables. (double)
    double years, days, minutesInYear;
    minutesInYear = 60.0 * 24.0 * 365.0;
    years = minutes / minutesInYear;
    days = minutes / (60.0 * 24.0); 
    
    printf("%li minutes will be %.20f years or %f days.\n", minutes, years, days);
    return 0;
}

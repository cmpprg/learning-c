/*
Author: Ryan Camp
Purpose: 
Date: 10-25-2020
*/

/*
NOTES:
output:
    - total rainfall for each year.
    - average rainfall for all years.
    - average rainfall for each month.

input:
    - 2d array 5 rows(year), 12 columns(months), values are floats.  

*/

#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void) {
    //initilaize 2d array
    float rainData[YEARS][MONTHS] = {
        {4.3, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}, // total per year should be 18.5,
        {2.0, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}, // average yearly rainfal be 18.0 
        {2.0, 9.9, 1.5, 1.5, 8.7, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}, // average for January should be 2.0
        {2.0, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5},  // average for February should be 1.5
        {2.0, 1.5, 1.5, 1.5, 1.5, 0.7, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5} 
    };
    //declare variables
    float yearTotals[YEARS] = {0};
    float monthTotals[MONTHS] = {0};
    float monthAverages[MONTHS] = {0};
    float totalRainfall = 0;
    float yearAverage = 0;
    char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    //loop over rainData and aggregate
    for (int i = 0; i < YEARS; i++) {
        for (int j = 0; j < MONTHS; j++) {
            yearTotals[i] += rainData[i][j];
            monthTotals[j] += rainData[i][j];
            totalRainfall += rainData[i][j];
        }    
    }
    //Calculate monthly Averages.
    for (int i = 0; i < MONTHS; i++)
        monthAverages[i] = monthTotals[i] / YEARS;
        
    //Calculate yearly Average
    yearAverage = totalRainfall / YEARS;

    //Display yearly rainfall totals
    printf("Year.....Rainfall (inches)\n");
    for (int i = 0; i < YEARS; i++) {
        printf("201%d.....%.4f\n", i, yearTotals[i]);
    }

    //Display yearly average
    printf("\nThe yearly average is %.4f inches.\n", yearAverage); 

    //Display monthly averages
    printf("\nMONTHLY AVERAGES:\n\n");

    for (int i = 0; i < MONTHS; i++)
        printf("%s       ", months[i]);

    printf("\n");

    for (int i = 0; i < MONTHS; i++)
        printf("%.4f    ", monthAverages[i]);

    printf("\n");

    return 0;
}

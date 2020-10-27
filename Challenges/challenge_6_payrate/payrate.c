/*
Author: Ryan Campk
Purpose: Calculate pay and taxes from hours worked.
Date: 10-25-2020
*/

#include <stdio.h>

int main(void) {

    //declare hours worked variabl to store user input and gather that input.
    int hoursWorked = 0;

    printf("Please enter the amount of hours you worked this week.\n>>");
    scanf("%d", &hoursWorked);

    //declare payrate, grossPay, taxWithholding, and netPay variables. (float)
    float payrate, grossPay, taxWithholding, netPay;
    
    //set payrate
    payrate = 12.00;

    //calculate grossPay and overtimePay if applicable
    if (hoursWorked > 40) {
        float overtimePay = (hoursWorked - 40) * (payrate * 1.5);
        grossPay = (payrate * 40) + overtimePay;
    } else {
        grossPay = payrate * 40;
    }    

    //calculate and set taxWithholding
    if (grossPay > 450.00) {
        taxWithholding += (grossPay - 450.00) * 0.25;
        taxWithholding += 150.00 * 0.20;
        taxWithholding += 300.00 * 0.15;
    } else if (grossPay > 300.00) {
        taxWithholding += (grossPay - 300.00) * 0.20;
        taxWithholding += 300.00 * 0.15;    
    } else {
        taxWithholding = grossPay * 0.15;
    }

    //calculate netPay
    netPay = grossPay - taxWithholding;

    //display output
    printf("Hours: %d hours\nGross: $%.2f\nPayrate: $%.2f\nTaxes: $%.2f\n\nNet: $%.2f\n", hoursWorked, grossPay, payrate, taxWithholding, netPay);
    return 0;
}

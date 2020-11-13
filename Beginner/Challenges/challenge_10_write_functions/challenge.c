/*
Author: Ryan Camp
Purpose: Challenge Write 3 different functions. listed below in notes
Date: 10-27-2020
*/

/*
NOTES:

    1. find the greatest common divisor of two non-negative integer values and return the result. int gcd(operand1, operand2)

    2. Calculate the absolut value of a number. take a double, return a double.

    3. compute the square root of a number. check params, if params are negative display message and return -1.

*/

#include <stdio.h>
#include <stdlib.h>

//declare functions:
int gcd(int num1, int num2);
double absoluteValue(double number);
float squareRoot(float num);

//start main function:
int main(void) {

    printf("gcd: %d\n", gcd(28, 21));
    printf("gcd: %d\n", gcd(1701, 3768));
    printf("gcd: %d\n", gcd(28, 10));
    printf("gcd: %d\n", gcd(1564, 765));
    printf("gcd: %d\n", gcd(8382478, 663));

    printf("absolute value: %f\n", absoluteValue(12));
    printf("absolute value: %f\n", absoluteValue(-567));
    printf("absolute value: %f\n", absoluteValue(11.654));
    printf("absolute value: %.9f\n", absoluteValue(-846.123456789));

    printf("square root: %f\n", squareRoot(25));
    printf("square root: %f\n", squareRoot(49));
    printf("square root: %f\n", squareRoot(50));
    printf("square root: %f\n", squareRoot(100));
    printf("square root: %f\n", squareRoot(9));

    return 0;
}

//define functions:

/*
Name: Negative Arg Error
Purpose: To give an error message and exit program if negative number is given as an argument to another function.
*/
void negativeArgError(char *functionName){
    printf("Error, arguments for %s must be positive non-zero integers!\n", functionName);
    exit(-1);
}

/*
Name: gcd
Purpse: To find the greatest common divisor of two given positive non-zero integers.
*/
int gcd(int x, int y){
    //declare local variable
    int result = 0;
    int smallNumber = x < y ? x : y;
    int largeNumber = x < y ? y : x;
    int lastRemainder = smallNumber;
    int dividend = largeNumber;
    int divisor = smallNumber;
    int remainder = largeNumber % smallNumber;

    //check input for negatives and zero, error out if present.
    if ( x <= 0 || y <= 0 ) {
        negativeArgError("gcd()");
    }
    //This is the Euclidian Algorithmic Process

    while(remainder != 0){
        lastRemainder = remainder;
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }

    result = lastRemainder;

    //this uses a brute force iterative process:
    /*for(int i = smallNumber; i >= 1; i--) {
        if(largeNumber % i == 0 && smallNumber % i == 0) {
            result = i;
            break;
        }
    }*/

    return result;
}

/*
Name Absolut Value
Purpose: to return the absolute value of a given double.
*/

double absoluteValue(double number) {
    double result = 0.0;

    if(number < 0){
        result = number * -1;
    } else {
        result = number;
    }
    return result;
}

/*
Name: Square Root
Purpse: to find the square root of an integer
*/
float squareRoot(float num) {
    const float epsilon = .00001;
    float guess = 1.0;

    if(num < 0){
        printf("Sorry, no negatives allowed");
        return -1.0;
    }
    
    while (absoluteValue(guess * guess - num) >= epsilon)
        guess = (num / guess + guess) / 2.0;

    return guess;
}














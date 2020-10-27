/*
Author: Ryan Camp
Purpose: learn about if statements
Date: 10-25-2020
*/

/*
if (expression) 
    program statement

"If it is not raining, I will go swimming."

if (it is not raining)
    I will go swimming

Used to stipulate execution of program based upon specified conditions.

...you can choose not to use curly braces if there is only one statement after condition.

if (scord > big)
    prinf("Jackpot\n");

...but if you have multiple statements you need to use curly braces to group them.

if (score > big) {
    score++;
    printf("You Win!\n");
}

...else clause allows you to extend an if statement.

sudo: 
    If the rain today is worse than the rain yesterday,
    I will take my umbrella,
    Else,
    Iwill take my jacket,
    Then I will go to work.

if (rain today > rain yesterday)
    take umbrella;
else
    take jacket;
    go to work;

...else if statement allows you to create a second condition

...ternary statemnt or conditional operator:
    - remainder == 0 ? printf("even number\n") : printf("odd number\n")     

*/
#include <stdio.h>

int main() {
// represent if / else    
    int numberToTest, remainder;

    printf("Enter your number to be tested\n>>");
    scanf("%i", &numberToTest);

    remainder = numberToTest % 2;

    if ( remainder == 0 ) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
// respresnt if / else if/ else
    int number, sign;

    printf("Please type in a number\n>>");
    scanf("%i", &number);

    if (number < 0) {
        sign = -1;
    } else if (number == 0) {
        sign = 0;
    } else {
        sign = 1;
    } 
//you can have as many else if satements you want.
    printf("Sign = %i\n", sign);

    return 0;
}

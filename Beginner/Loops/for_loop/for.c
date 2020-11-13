/*
Author: Ryan Camp
Purpose: To learn about for loops in C language
Date: 10-25-2020
*/

/*
NOTES:
For Loop:
    - pre-test loop, continuation is tested before beginning loop.

    for(start_condition; continuation_condition; action_per_iteration) {
        loop_statement;
    }    

    - counter control loop
    - sentinal control loop

    example for counter:

    for (int i = 0; i < 10; ++i) {
        printf("%d", int);
    }

    example for sentinal:

    for (char input; input == 'quit'; scanf("%s", input)) {
        printf("You have not quit the loop yet.")
    }
*/
#include <stdio.h>

int main(void) {
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum\n>>");
    scanf("%u", &count);
    
    for (unsigned int i = 1; i <= count; ++i) {
        sum += i;
        printf("%llu\n", sum);
    }
    
    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return ;
}

// infinite loops are useful if you are monitoring data or listening for connections.

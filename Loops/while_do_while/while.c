/*
Author: Ryan Campj
Purpose: To learn about while and do while loops in c language
Date: 10-25-2020
*/

/*
NOTES:

pre-test loop

While loop: mechanism for repeating a set of statements as long as condition is true

syntax:

while (condition is true) {
    do this
    ...statement
    ...statement 
}

int count = 1;
while (count <= 5) {
    printf("Hello, World");
    count++
}

int num = 0;
scanf("%d", &num);

while(num != -1) {
    ...statements;
    scanf("%d", &num);
}

do while loop:
    - post-test loop
    - always runs at least once

syntax:

do {
    statements...
    ...
    ...
} while (conditional statement)
*/

#include <stdio.h>

int main() {
    //declare variables
    int answer = 0;

    //gather input
    printf("What is the sum of 5 and 6?\n>>");
    scanf("%d", &answer);

    //check answer and repeat unless correct
    while (answer != 11) {
        printf("That is incorrect! Please try again.\n>>");
        scanf("%d", &answer);
    } 
    //loop broken, give a happy response.
    printf("That is correct!!\n");

    return 0;
}

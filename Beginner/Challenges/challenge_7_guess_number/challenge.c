/*
Author: Ryan Camp
Purpose: Guess the Number Game, too high too low
Date
*/

/*
    - generate random number 0-20
    - have user gues what it is (only 5 guesses)
    - tell the user if their guess is high or low of the mark, or if they have won.
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //declare variables
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    int numberOfTries = 5;
    int guess;

    //inform user of the game
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    while (numberOfTries > 0) {
       
        //let user know how many tries left and ask for guess 
        printf("\nYou have %d tr%s left.\n", numberOfTries, numberOfTries == 1 ? "y" : "ies");
        printf("Please Enter a guess:>>");
        scanf("%d", &guess);

        //check if guess is valid, or inform if not. skip iteration with continue
        if (guess > 20 || guess < 0) {
            printf("Your guess must be between 0 and 20, please try again.\n");
            continue;
        }
        
        //check if guess is correct and break out of loop.
        //or if it is less than or greater than number, inform user.
        if (guess == randomNumber)
            break;
        else if (guess > randomNumber)
            printf("Sorry %d is wrong. My number is less than that.\n", guess);
        else
            printf("Sorry %d is wrong. My number is greater than that.\n", guess);

        --numberOfTries;
            
    }

    if (numberOfTries > 0) {
        printf("\nCongratulations. You guessed it!\n");
    } else {
        printf("\nI'm sorry you ran out of guesses!\n");
        printf("The correct number was %d. Better luck next time!\n", randomNumber);
    }    
    return 0;
}

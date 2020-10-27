/*
Author: Ryan Camp
Purpose: To generate and display all prime numbers up to 100
Date: 10-25-2020
*/

#include <stdio.h>

int main(void) {
    //declare current number;
    int currentNumber = 0;
    //declare primes array with 50 elements available, initialize with 2 & 3 for first two values.
    int primes[50] = {2, 3};
    //declare a variable that counts the number of current primes found.
    int primeCount = 2;    
    //declare a variable isPrime boolean that will switch on when prime found.
    _Bool isPrime;

    //loop through range array 
    for(int i = 5; i < 100; i += 2) {
        currentNumber = i;
        isPrime = 1;
            //2. can it be divided evenly by any of the current numbers in the primes array?
        for (int j = 0; isPrime && currentNumber / primes[j] >= primes[j]; j++) {
            if (currentNumber % primes[j] == 0)  
                isPrime = 0;
        }

            // if neither of these conditions are met add this prime number that we found to the primes array. use the prime_counts variable to do this.
        if (isPrime) {
            primes[primeCount] = currentNumber;
            primeCount++;
        }
    }
    
    for(int i = 0; i < primeCount; i++)
        printf("  %d  ", primes[i]);

    printf("\n");
 
    return 0;
}

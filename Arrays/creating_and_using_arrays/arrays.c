/*
Author: Ryan Camp
Purpose: To learn about creating and using arrays in c language
Date: 10-26-2020
*/

/*
NOTES:
Arrays:
    - allow us to store multiple values in the same variables.
    - allow us to group values together under a single name.
    - has a fixed number of data items that are all of the same type.
    - data items in an array are referred to as elements.

    - Declare an Array:

    long numbers[10];

    //this says I want an array of ten long numbers.

    - Access an Array:

    numbers[0]; 

    //this says I want long number at index 0 / first position in the numbers array.
    //here is a representation of the array and how it is stored

    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    
    // there are 10 index positions in this array starting at index 0.
    
    - very common to use a loop to access each element in an array.
    
    for (int i = 0; i < 10; ++i) {
        printf("The Number at position %d is %d", i, numbers[i]);
    }

    - write data to an array

    numbers[2] = 4563;

    //you just specify the index and assign a value.

*/

#include <stdio.h>

int main() {
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    int i;
    for (i = 0; i < count; ++i) {
        printf("Grade %2u>> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;

    printf("The average grade in the class is %.2f", average);
    return 0;
}










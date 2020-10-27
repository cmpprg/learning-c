/*
Author: Ryan Camp
Purpose: Learn about multidimensinal arrays in c language
Date: 10-25-2020
*/

/*
NOTES:
    - multidimensional arrays are 'arrays of arrays'.

    - two dimensional arrays are common, they can represent rows and columns, or a matrix, or a spreadsheet.

    - They are declared in the same way as a onedimensional array.

        int matrix[4][5];

        // this defines 4 rows and 5 columns, for a total of 20 elements.

    - example of initialization of 2-dimensional array:

        int numbers[3][4] = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {47, 48, 49, 50} 
        };

    - you can initialize some and not all elements and therrest will be 0 if int.

    
*/

#include <stdio.h>

int main() {
    //initialize sum variable and numbers array.
    int sum = 0;
    int numbers[2][3] = {
        {2, 4, 5},
        {6, 7, 10}
    };
    
    //iterate through the array and sum all the numbers
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += numbers[i][j];
        }
    }

    //display sum
    printf("the sum of the entire array is %d\n", sum);
    return 0;

}

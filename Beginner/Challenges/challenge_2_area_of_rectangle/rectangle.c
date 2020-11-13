/*
Author: Ryan Camp
Purpose: Take in height and width of a rectangle and calculate the perimeter and area of the rectangle.
Date: 10-23-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //declare all necessary variables
    char* endptr_height;
    char* endptr_width;
    double height, width, perimeter, area;
    
    //convert string argument gathered from command line to a double and assign it.
    height = strtod(argv[1], &endptr_height);
    width = strtod(argv[2], &endptr_width);

    //perform calculations for perimeter and area
    perimeter = 2.0 * (height + width);
    area = (height * width);

    //print statements for perimeter and width
    printf("height = %f, width = %f, perimeter = %.2f\n", height, width, perimeter);
    printf("height = %f, width = %f, area = %.2f\n", height, width, area);
    
    //successfully return 0
    return 0;
}

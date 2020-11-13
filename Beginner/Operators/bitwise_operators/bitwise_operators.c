/*
Author: Ryan Camp
Purpose: To learn about bitwise operators
Date: 10-24-2020
*/

/*
Bitwise Operators:
    - quite different from logical operators.
    - operate on the bits in integer values.
    - Not used in the common program.
    - (& = AND)
    - (| = OR)
    - (^ = XOR)
    - (~ = Ones Compliment): Flips the bits
    - (<< = binary shift left)
    - (>> = binary shift right)

    - Examples of use:
        - Store whether the person is male or female with one bit.
        - use three other bits to specify whether the person can speak Fench, German, or Italian.
        - another bit to record whether the person's salary is $50,000 or more.
        - in just five bits you have a substantial set of data recorded.

Binary Number: is a number that includes only ones and zeroes.
    0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   | This is the binary format, if any 0 becomes a 1, its value becomes...
        |       |       |       |       |       |       |       |
  2**7  | 2**6  | 2**5  | 2**4  | 2**3  | 2**2  | 2**1  | 2**0  | ... 2 to the power of the column starting right going left
        |       |       |       |       |       |       |       |
   128  |  64   |  32   |  16   |   8   |   4   |   2   |   1   | This is the decimal notation representation of each column.
*/
#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int and_result = 0;
    int or_result = 0;
    int xor_result = 0;
    unsigned int ones_comp_result = 0;
    int shift_left_result = 0;
    int shift_right_result = 0;
    
    and_result = a & b; // 0000 1100 = 12
    or_result = a | b; // 0011 1101 = 61
    xor_result = a ^ b; // 0011 0001 = 49
    ones_comp_result = ~a; // 1100 0011 plus 24 more significant bits if stored in 32 bits, long would be 64 bits, short would be 16 bits.
    shift_left_result = a << 2;
    shift_right_result = b >> 2; // 3

    printf("Result of and: %d\n", and_result);
    printf("Result of or: %d\n", or_result);
    printf("Result of xor: %d\n", xor_result);
    printf("Result of ones_comp: %d\n", ones_comp_result);
    printf("Result of shift_left: %d\n", shift_left_result);
    printf("Result of shift_right: %d\n", shift_right_result);
    return 0;
}

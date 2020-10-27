/*
Author:Ryan Camp
Purpose: to learn about variables and datatypes.
Date: 10-22-2020
*/

// Constants are types of data that do not change and retain their values throughout the life of the program
// Variables are types of data may change or be assigned values as the program runs.


/*
declaring varibales:

type-specifier variable-name;

you can specify more than one on a line

You must declare before using. But you can initialize with a value. example 'int x = 21;'
*/

#include <stdio.h>

/* include this header if you want to write (bool boolean_var = true;)
   instead of ..............................(_Bool boolean_var = 1;) */
#include <stdbool.h>

int main(void)
{
  int integer_var = 100;
  int negative_var = -100;
  float floating_var = 331.79;
  double double_var = 8.44e+11;

  _Bool boolean_var = 1;

  enum primary_color { red, yellow, blue };
  enum primary_color bad, good;

  // bad = green;
  good = blue;

  enum month { January, February, March, April, May, June,
               July, August, October, November, December };

  enum month april = April;

  // enum identifies(January or March ...etc) will be stored in memory as indexed numbers starting with 0..n - 1
  // you can also assign a number to associate with an identifier.

  enum direction { Up, Down, Left = 10, Right };

  enum direction up, down, left, right;
  up = Up; down = Down, left = Left; right = Right;

  printf("The number assigned to good in memory is: %i\n", good);
  printf("The number assigned to April in memory is: %i\n", april);
  printf("The number assigned to Up in memory is: %i\n", up);
  printf("The number assigned to Down in memory is: %i\n", down);
  printf("The number assigned to Left in memory is: %i\n", left);
  printf("The number assigned to Right in memory is: %i\n", right);
  return 0;
}

/*
int: stores integers, 158, 3, -45, 0xFFED98.
  - no spaces permitted between numbers.
  - can assign short, long, or unsigned to further specify for memory management

float: stores decimals, 3.0, 125.8, -0.0001. 1.7e4 (1.7 * 10 powerOf 4)
  - - can assign short, long, or unsigned to further specify for memory management

double: larger version of float, allocates more memory to accomidate this.
  - All floating point constants (12.5f) are taken as doubles by the C compiler.
  - - can assign short, long, or unsigned to further specify for memory management

_Bool: stores 0 or 1, representing true or false, on or off.(Binary Choice)
  - Example: has all the data been read from the file.

The amount of storage that is allocated to storea particular type of data, dependent
on what kind of machine your running on 16bit 32bit 64bit OS.

short: uses less memory for smaller data;
long: uses more memory for larger data;
unsigned: if you want a number with a non-negative value;

enum: Allows a programmer to define a variable and specify the valid values
that could be stored into that variable.
  - example: (define) enum primary_color { red, yellow, blue };
             (assign) enum primary_color my_favorite_primary_color = red;

char: represents single characters 'a', ';', '4'
  - single quotes are character literals.
  - 'character' is not "string", character is a single character not multiple characters.
  - ascii table is how a computer quantifies characters, you can assign a characters
    a numberic value and C compiler will look it up in the ascii table and assign the character found there.

special characters / escape sequences:
  - '\n' = newline
  - '\r' = cariage return 
  - '\v' = vertical tab
  - '\t' = horizontal tab
  - there are more....
*/

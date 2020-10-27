/*
Author: Ryan Camp
Purpose: To learn about input and output in c language
Date: 10-22-2020
*/

// This gives us access to both printf()'output' and scanf()'input'
#include <stdio.h>

/*
example: scanf("%d", &b);

format specifiers:

int uses %d
float uses %f
char uses %c
string uses %s
double uses %lf

second parameter points to where you want to store the data.
*/




int main(void) {
  char str[100];
  int i;

  printf("Enter the value: ");
  scanf("%d %s", &i, str);

  printf("\nYou entered : %s::::%d\n", str, i);
  return 0;
}

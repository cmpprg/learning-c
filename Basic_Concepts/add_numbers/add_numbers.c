/*
Author: Ryan Camp
Purpose: This program takes two numbers and add them together
Date: 10-22-2020
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc != 3) {
    printf("There is the wrong number of inputs!\n You need 2 integer inputs!!\n");
    return 1;
  }

  printf("%s and %s are the numbers\n", argv[1], argv[2]);
  printf("%i is the number of arguments\n", argc);
  return 0;
}

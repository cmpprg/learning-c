/*
Author: Ryan Camp
Purpose: to provide some examples of arrays and pointers
Date: 11-3-2020
*/

/*
NOTES:
    - 
*/

#include <stdio.h>
#include <string.h>

int main(void){
    
    char multiple[] = "a string";
    char *p = multiple;

    printf("The string multiple = ");

    for(int j = 0; j < strnlen(multiple, sizeof(multiple)); ++j){
        printf("%c", multiple[j]);
    }

    printf("\n\n"); 
        

    for(int i = 0; i < strnlen(multiple, sizeof(multiple)); ++i){
        printf(" multiple[%d] = %c\t *(p + %d) = %c\t &multiple[%d] = %p\t p + %d = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, (p + i)); 
    }

    printf("\n\n"); 

    long nums[] = {15L, 25L, 35L, 45L};
    long *pt = nums;

    for(int i = 0; i < sizeof(nums)/ sizeof(*pt); ++i){
        printf(" address pt + %d (&nums[%d]): %llu\t *(pt + %d) value: %ld\n", i, i, (unsigned long long)(pt + i), i, *(pt + i));
    }

    printf("\n\n Type long occupies: %d bytes\n\n\n", (int)sizeof(long));
    return 0;
}

#include <stdio.h>


int main() {
    enum gender { male, female };
    enum gender is_male, is_female;

    is_male = male;
    is_female = female;

    printf("is_male is %i and is_female is %i.\n", is_male, is_female);

    char my_character = 'f';
    char my_second_character = 65;
    char newline = '\n';

    printf("%c is my_character, %c is my_second_character.>>%c", my_character, my_second_character, newline);
    
	return 0;
}

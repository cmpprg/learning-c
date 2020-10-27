#include <stdio.h>

int main()
{
    int integer_var = 100;
    float floating_var = 331.79;
    double double_var = 8.44e+11;
    char char_var = 'W';

    _Bool boolean_var = 0;

    printf("integerVar = %i\n", integer_var);
    printf("flatingVar = %f\n", floating_var);
    printf("doubleVar = %e\n", double_var);
    printf("doubleVar = %g\n", double_var);
    printf("charVar = %c\n", char_var);
    printf("boolVar = %i\n", boolean_var);

    float x = 3.999838475636237;

    printf("%.5f", x);

    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int number_of_args = argc;
    char *argument_1 = argv[0];
    char *argument_2 = argv[1];

    printf("Number of Arguments = %i\n", number_of_args);
    printf("Name of Program = %s\n", argument_1);
    printf("Argument give to Program = %s\n", argument_2);
    return 0;
}

/*
You gather information from the user at the command line by having them type it in after the filename for execution.
  - example: program_name argument_1 argument_2.

main() funciton is the entry point of program and can take arguments.

The first parameter in main() is argc(argument count) it represents how many
arguments were passed to the program from the command line. This includes the name of the program.

The second parameter in main() is argv(argument vector). It points to an array of all the arguments.


*/

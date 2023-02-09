#include <stdio.h>

int main( int  argc, char *argv[])

{
    int numberofArguments = argc;

    char  *argument1 = argv[0];

    char  *argument2 = argv[1];

    printf ("the number of Arguments are : %d ", numberofArguments);

    printf ( "Argument 1 is the program name : %s ", argument1);

    printf ( "Argument 2 s the command line argument : %s", argument2);

    return 0;
}

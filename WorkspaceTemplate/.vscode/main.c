#include <stdio.h>
#include <stdbool.h> 


int main(int argc, char *argv[]) 
{
    int numberOfArguments = argc;
    char *argument1 = argv[0]; 
    char *argument2 = argv[2]; 
    printf("Number of arguments: %d\n", numberOfArguments);
    printf("Program Name: %s\n", argument1);
    printf("Command line argument: %s\n", argument2);

    return 0;
}


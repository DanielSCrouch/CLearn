#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h> 

int main(int argc, char *argv[])
{
    double width = atof(argv[1]);
    double height = atof(argv[2]);
    double perimeter; 
    double area; 

    perimeter = (2.0 * width) + (2.0 * height); 
    area = (width * height);  

    // char *argument1 = argc; 
    printf("argc %d\n", argc);
    printf("argv %c\n", *argv[0]);      // current directory? 
    printf("Width: %f \nHeight: %f\n", width, height);  
    printf("Perimeter: %f \nArea: %f\n", perimeter, area);  

    return 0;
}

// int main(int argc, char *argv[]) 
// {
//     int numberOfArguments = argc;
//     char *argument1 = argv[0]; 
//     char *argument2 = argv[2]; 
//     printf("Number of arguments: %d\n", numberOfArguments);
//     printf("Program Name: %s\n", argument1);
//     printf("Command line argument: %s\n", argument2);

//     return 0;
// }


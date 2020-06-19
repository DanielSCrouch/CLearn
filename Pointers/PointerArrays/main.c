
#include <stdio.h> 

main() 
{
    int values[100]; 

    int *pValues = NULL; // designate the pointer *type as the type within the array
    pValues = values;    // not required to designate address for assignment 
    pValues = &values[0]; // equivalent to previous 
    
}
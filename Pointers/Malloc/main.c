
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main() 
{ 
    char *str = NULL; 
    char *pStr = (char*) malloc(15 * sizeof(char)); 
    strcpy(pStr, "abcde"); 
    printf("String: %s \t Address: %p\n", pStr, pStr); 

    printf("Size of char: %lu\n", sizeof(char));

    pStr = (char*) realloc(pStr, 25 * sizeof(char)); 
    strcat(pStr, "fghij"); 
    printf("String: %s \t Address: %p\n", pStr, pStr); 

    free(pStr); 
    pStr = NULL; 

    return 0; 

}


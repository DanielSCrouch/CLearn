
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{

    int limit; 
    char *pStr = NULL; 

    printf("Enter character limit: "); 
    scanf("%d", &limit);

    pStr = (char*) malloc(limit * sizeof(char)); 

    if (pStr)
    {
        printf("Enter a string: "); 
        scanf(" ");
        fgets(pStr, sizeof(pStr), stdin);

        printf("String is: %c\n", pStr); 
    }
    free(pStr); 
    pStr = NULL;



}


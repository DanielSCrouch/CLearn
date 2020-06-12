#include <stdio.h> 

int main()
{
    char str[100];
    int i; 

    printf("Enter value:"); 
    scanf("%s %d", str, &i);

    printf("\nEchoing: %s, %d", str, i);

    return 0;

}
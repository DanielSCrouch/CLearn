
#include <stdio.h> 

int main()
{
    int num = 100; 
    int *pNum = NULL; 
    pNum = &num; 

    printf("Address of variable: %p\n", &num);
    printf("Address of pointer: %p\n", &pNum);
    printf("Value of pointer: %p\n", pNum);
    printf("Value of variable: %d\n", *pNum);


} 
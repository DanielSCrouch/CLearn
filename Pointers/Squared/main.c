#include <stdio.h> 

void squared(int *num); 

int main()
{
    int num = 100;
    squared(&num);
    printf("%d squared: %d\n", 100, num); 

}

void squared(int *num) 
{
    *num *= *num;
}
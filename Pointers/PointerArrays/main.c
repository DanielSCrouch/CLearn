
#include <stdio.h> 

int arraySum(int array[], const int n);

int main() 
{
    int values[100] = {1, 2, 3, 4};

    int *pValues = NULL; // designate the pointer *type as the type within the array
    pValues = values;    // default to first element in array 
    pValues = &values[0]; // equivalent to previous 

    int values3 = *(pValues + 3); // equal to values[3] 

    printf("3rd item in array: %d\n", values3);
    printf("3rd item in array: %d\n", values[3]);

    int sum = arraySum(values, 100); 
    printf("sum: %d\n", sum);

    return 0; 
}

int arraySum(int array[], const int n) 
{
    int sum = 0; 
    int *ptr; 
    int * const arrayEnd = array + n; // pointer is constant (more efficient for compiler)

    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr; 

    return sum; 
}

int arraySum(int *pArray, const int n) // explicit pointer to array - same as previous 
{
    int sum = 0; 
    int * const arrayEnd = pArray + n;

    for (; pArray < arrayEnd; ++pArray)
        sum += *pArray;

    return sum; 
}
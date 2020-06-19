
#include <stdio.h> 


int main() 
{
    int num = 5;
    int *pNum = NULL;     //initialise to not point to any memory location 
    pNum = &num;       //pointer variable of type int*, points to variable of type in
                                //represented as an unsigned integer on most systems 
    printf("Pointer is: %p\n", pNum);  //%p format specifier for pointers 
    int result = *pNum + 5;            //dereferencing 
    printf("Result is: %d\n", result);  
    *pNum += 1;                        // assign value through pointer
    printf("Number plus 1 is: %d\n", num);  

    printf("pnumber's address: %p\n", (void*)&pNum); //generic pointer cast

    if(!pNum) ...        // check if pointer has memory assigned (not NULL) 

    int numb2 = 10; 

    const int *pNum2 = &num2;  // value pointed to must not be changed 
    *pNum2 = 11;                // flags attempt to modify value as an error 
    numb2 = 11;                 // can change value directly, since pointer was not used

    int *const spNum2 = &num2; // pointer must not be redirected 

    const int *const spNum3 = &pnum // pointer and value pointer to must not be changed  


    return 0; 
}


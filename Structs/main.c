
#include <stdio.h> 

int main()
{
    struct date 
    {
        int day; 
        int month; 
    };

    struct date purchaseDate; 
    purchaseDate.day = 25; 
    purchaseDate.month = 1; 

    // alternatively 

    struct date today = {.day = 25, .month = 1}; 

    // compound literal 

    today = (struct date) {.day = 25, .month = 1}; 

    struct date dates[10];  // array of structures 
    dates[1].day = 25; 
    dates[1].month = 1; 

    //alternatively 
    struct date dates2[10] = {{25, 1}, {19, 2}};
    struct date dates3[10] = {[3] = {6, 2}}; 
    struct date dates4[10] = {[3].day = 6, [3].month = 2}; 

    // pointers 
    struct date *pDate; 
    (*pDate).day = 21;  // access struct 
    pDate -> day = 21;  // alternative notation 


}
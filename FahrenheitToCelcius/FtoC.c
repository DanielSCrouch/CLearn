#include <stdio.h> 

/* print fahrenheit to celcius table */ 

main()
{
    float fahr, celcius;             
    int lower, upper, step;
    lower = 0;                      
    upper = 300; 
    step = 10; 
    fahr = lower; 
    while (fahr < upper) {         
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3d %6d\n", celcius, fahr);
        fahr = fahr + step;
    }

}
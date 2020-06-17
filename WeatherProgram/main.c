#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main() 
{
    // initialise rainfall data for 2011-2015

    int i, j;
    float rainYTotal; 
    float rainTotal;
    float rainAvg; 
    float rainMAvg;

    float rain[YEARS][MONTHS] = 
        {
            {4.3,4.3,4.3,4.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        };
    
    for (i = 0; i < YEARS; i++) {
        rainYTotal = 0.0;
        for (j = 0; j < MONTHS; j++) {
            rainYTotal += rain[i][j]; 
        }
        rainMAvg = rainYTotal / MONTHS;
        rainTotal += rainYTotal; 
        printf("Year %d:\n", (i+1));
        printf("\t Total: %.2f\n", rainYTotal);
        printf("\t Monthly average: %.2f\n", rainMAvg);
    }
    printf("--------\n");
    printf("Average yearly: %.2f\n", rainTotal / YEARS);

    return 0;
}

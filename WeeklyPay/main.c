#include <stdio.h> 

#define PAYRATE 12.00
#define STNHOURS 40
#define OVERTIME 1.5 
#define TAXALIMIT 300.00
#define TAXA 0.15 
#define TAXBLIMIT 150 
#define TAXB 0.20 
#define TAXC 0.25 

int main()
{   
    // declare variables 
    int hours = 0; 
    float grossPay = 0; 
    float taxes = 0; 
    float netPay = 0;

    // receive hours worked 
    printf("Enter hours worked: "); 
    scanf("%d", &hours);

    // calculate gross pay 
    if (hours <= STNHOURS)
        grossPay = (hours * PAYRATE); 
    else 
        grossPay = (STNHOURS * PAYRATE) + ((hours - STNHOURS) * PAYRATE * OVERTIME); 

    // calculate taxes 
    if (grossPay <= TAXALIMIT)
        taxes = (grossPay * TAXA); 
    else if (grossPay < TAXBLIMIT)
        taxes = grossPay - (TAXALIMIT * TAXA) + ((grossPay - TAXALIMIT) * TAXB);
    else
        taxes = (TAXALIMIT * TAXA) + (TAXBLIMIT * TAXB) + ((grossPay - TAXALIMIT - TAXBLIMIT) * TAXC);
    
    // calculate net pay 
    netPay = grossPay - taxes; 
    
    printf("Gross pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net pay: %.2f\n", netPay);

}

// skip to next iteration with 'continue' 
// exit loop with 'break' 
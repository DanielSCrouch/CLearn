#include <stdio.h> 
#include <math.h> 

int GreatestCommonDivisor(int a, int b); 
float Abs(float a); 
float Sqrt(float a); 

int main()
{
    int gcd = GreatestCommonDivisor(150, 35); 
    printf("gcd of 150 and 35 is: %d\n", gcd); 

    float abs = Abs(0.555); 
    printf("abs of 0.555 is: %f\n", abs); 
    printf("abs of -0.555 is: %f\n", Abs(-0.555)); 
    printf("abs of 1 is: %f\n", Abs(1));
    printf("abs of -1 is: %f\n", Abs(-1));  

    float sqrt = Sqrt(25); 
    printf("Sqrt of 25: %f\n", sqrt);
    printf("Sqrt of 5: %f\n", Sqrt(5));
    printf("Sqrt of 25.0: %f\n", Sqrt(25.0));
    printf("Sqrt of 5.0: %f\n", Sqrt(5.0));
    printf("Sqrt of -5: %f\n", Sqrt(-5));
    printf("Sqrt of -5.0: %f\n", Sqrt(-5.0));
    return 0; 
}

int GreatestCommonDivisor(int a, int b)
/* Euclid's Algorithm */ 
{
    if (b == 0) {
        return a; 
    }
    else {
        return GreatestCommonDivisor(b, a % b); 
    }
}

float Abs(float a) 
{
    if (a < 0) {
        return -a; 
    }
    else {
        return a; 
    }
}

float Sqrt(float a) 
{
    if (a < 0) {
        printf("Negative number supplied!\n");
        return -1.0;
    }
    return pow(a, 0.5); 

}

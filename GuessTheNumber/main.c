#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define MAXNUMBER 20 
#define MAXTRIES 5

int main() 
{
    time_t t; 
    int rNum; 
    srand((unsigned) time(&t));         // initialise random number gen 
    rNum = rand() % (MAXNUMBER + 1);    // generate random number 
    int gNum; 
    int tries = 0; 
    printf("Number generated: %i\n\n", rNum);
    while (gNum != rNum && tries < MAXTRIES)
    {
        printf("Guess number: ");
        scanf("%d", &gNum);
        if (gNum < rNum) 
            printf("Too low!\n");
        else if (gNum > rNum)  
            printf("Too high!\n"); 
        ++tries;
    }
    if (gNum == rNum)
        printf("You Win!\n");
    else 
        printf("Game Over!\n");

}

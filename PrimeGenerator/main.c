#include <stdio.h> 
#include <stdbool.h>

#define MAXVAL 100 
#define ARRAYSIZE 50

int main()
{
    int index = 2; 
    bool p = true; 
    int primes[ARRAYSIZE] = {2, 3};
    int i; 
    int j; 
    
    for (i = 3; i < MAXVAL; i=i+2) {

        for (j = 0; j < ARRAYSIZE; j++) {

            if (primes[j] > 0) {

                if (i % primes[j] == 0) {
                    p = false;
                    break; 
                }
            }
        }

        if (p) {
            primes[index] = i;
            ++index;
            printf("prime %d added", i);
        }
        else {
            p = true; 
        }

    }

    for (i = 0; i < ARRAYSIZE; i++) {
        if (primes[i] != 0) {
            printf("%d\n", primes[i]);
        }
    }
    
    return 0;
}

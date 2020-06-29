#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <strings.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
    
    int *buf = calloc(1, sizeof(arr1));   // z array size less than or equal to arr1 
    int *k = calloc(1, sizeof(int));      // buf insertion index 
    *k = 0; 
    
    printf("-----------------\n"); 
    printf("n1: %d\n", (int)n1); 
    printf("n2: %d\n", (int)n2); 
    
    // iterate through first array 
    for (int i = 0; i < (int)n1; i++) 
    {
      printf("i: %d\n", i); 
      printf("a1: %d\n", *(arr1 + i)); 
      
      // check if present in arr2 
      bool unmatched = true;
      
      // iterate through second array 
      for (int j = 0; j < (int)n2; j++) 
      {
        printf("  j: %d\n", j); 
        printf("  a2: %d\n", *(arr2 + j)); 
        if (*(arr1 + i) == *(arr2 + j)) 
          unmatched = false; 
      }
      
      // append unmatched to buff 
      if (unmatched) 
      {
        printf("  unmatched\n");
        *(buf + *k) = *(arr1 + i); 
        *k = *k + 1;  
      }
        
      printf("  buf: %d\n", *(buf + *k - 1));
      
      
    }
    
    printf("  k: %d", *k); 
    *z = *k; 
    return buf; 
}
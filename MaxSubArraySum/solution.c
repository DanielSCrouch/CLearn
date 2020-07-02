#include <stddef.h>
void *memcpy(void *dest, const void * src, size_t n);

int maxSequence(const int* array, size_t n) {
    
    int *maxSub = calloc(n, sizeof(int)); 
    int maxSum = 0; 
    
    // increment lower bound index 
    for (int i = 0; i < (int)n; i++) 
    { 
      int *curSub = calloc(n, sizeof(int)); 
      int curSum = 0; 
      
      // increment upper bound index 
      for (int j = i, k = 0; j < (int)n; j++, k++) 
      {
        // build current sub-array 
        *(curSub + k) = *(array + j);
        curSum += *(array + j); 
        
        // if max seen so far record 
        if (curSum > maxSum)
        {
          memcpy(maxSub, curSub, n);
          maxSum = curSum; 
        }
        
      }
      free(curSub); 
    }
    free(maxSub); 
    
    return maxSum; 
  
    

}
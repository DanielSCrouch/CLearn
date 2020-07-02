#include <stdbool.h>

bool alphanumeric(const char* strin) {
    
    if (strlen(strin) == 0)
      return false; 
    
    char c; 
    bool cCheck;
    bool wCheck = true;  
    
    while (*strin != '\0')
    {
    
      c = *strin;
      cCheck = false;
      
      // check numerical 
      for (int a = 48; a < 58; a++)
        if ((int)c == a)
          cCheck = true; 
          
      // check upper alpha 
      for (int a = 65; a < 91; a++)
        if ((int)c == a)
          cCheck = true; 
    
      // check lower alpha 
      for (int a = 97; a < 123; a++)
        if ((int)c == a)
          cCheck = true; 
          
      // if not a alphanumeric, set check to false 
      if (!cCheck) 
        wCheck = false; 
      
      // increment string pointer 
      ++strin;
    }
    
    return wCheck; 

}
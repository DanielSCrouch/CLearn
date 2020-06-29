#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

char *strtok(char *str, const char *delim);
char *strdup(const char *s);
size_t strlen(const char *str);
char *strcat(char *dest, const char *src);

char *encrypt_this(const char *str)
{   
    char *buf = calloc(100, sizeof(char));  // hold encrypted message (longer than str) 
    char *tmp1 = calloc(8, sizeof(char));   // first char ascii conversion 
    char tmp2[2] = " ";                     // var for holding char (switch 2nd with last) 
    char *copy = strdup(str);               // strtok requires non const 
    const char s[2] = " ";                  // string delimiter
    char *token;                            // var for holding current token (word) 
    
    // Get first token 
    token = strtok(copy, s);
    
    // walk through other tokens
    while( token != NULL ) {
      snprintf (tmp1, sizeof(tmp1), "%d",token[0]);  // convert to ascii 
      strcat(buf, tmp1);                             // append to buf 
      
      // handle second swap 
      if (strlen(token) > 1)
      {
        tmp2[0] = token[1];
        token[1] = token[strlen(token) - 1];
        token[strlen(token) - 1] = tmp2[0];
        strcat(buf, &(token[1])); 
      }
      
      // add space between cipher words 
      strcat(buf, " "); 
      
      // increment token 
      token = strtok(NULL, s);
    }
    
    // Remove final space 
    buf[strlen(buf) - 1] = '\0'; 
    
    return buf;
}
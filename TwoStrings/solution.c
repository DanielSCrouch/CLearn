
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 

void case_swap(char *buf, const char *a, const char *b);

char *work_on_strings(const char *a, const char *b) {
  char *buf = calloc(strlen(a) + strlen(b) + 1, sizeof(char)); 
  case_swap(buf, a, b);
  case_swap(buf, b, a);
  return buf;
}

void case_swap(char *buf, const char *a, const char *b) {
  char s[] = " "; 
  for (int i = 0; i < (int)strlen(a); i++) {
    s[0] = *(a + i); 
    for (int j = 0; j < (int)strlen(b); j++) { 
      if (tolower(*(a + i)) == tolower(*(b + j))) {
        if isupper(s[0]) {
          s[0] = tolower(s[0]); }
        else if islower(s[0])
          s[0] = toupper(s[0]);
        }
      }
      strcat(buf, s); 
    }
  
}


  
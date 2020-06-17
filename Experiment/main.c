#include <stdio.h> 

int main() 
{
    char aString[] = "abcd\n";                      // automatically sizes 
    printf("a: %s", aString);
    char bString[5] = {'a', 'b', 'c', 'd', '\n'};   // same as a
    printf("b: %s", aString);


    // count length of string 
    int count = 0;
    while (aString[count] != '\0')
        ++count; 
    printf("len of string is: %d\n", count);
    return 0; 
}


// char str[] = "abcde";
// char ch = 'c'; 
// char *pFound = NULL; 
// pFound = strchr(str, ch); 

// char text[] = "abcde"; 
// char word[] = "cd"; 
// char *pFound = NULL; 
// pFound = strstr(text, word);    // returns "cde",   case sensitive!

// char str[80] = "Hello how are you";
// const char s[2] = " ";
// char *token;
// token strtok(str, s);           // returns first token. NULL if none

// for(int i=-l (buf[i]=(char)toupper(buff[i])) != '\0'; ++i); // toupper returns int
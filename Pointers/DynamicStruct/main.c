#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

#define SLEN 1024 

struct namect 
{
    char *fname; // using pointers instead of arrays
    char *lname; 
    int letters; 
};

void getinfo (struct namect *pst)
{
    char temp[SLEN];
    printf("Enter sentence: ");
    scanf(" ");
    fgets(temp, SLEN, stdin);

    //allocate memory to hold name 
    pst->fname = (char*)malloc(strlen(temp) + 1); 
    strcpy(pst->fname, temp);
}
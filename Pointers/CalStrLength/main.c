
#include <stdio.h> 

int strlen2(const char *string); 


int main() 
{
     char string[100];
     printf("Enter a string: ");
     scanf("%s", string); 

     printf("Length is: %d\n", strlen2(string));

     printf("Length is: %d\n", strlen2("")); // ?????

}


int strlen2(const char *string) 
{
    int length; 
    while (*string)
    {
        ++length;
        ++string; 
    }

    return length; 
}
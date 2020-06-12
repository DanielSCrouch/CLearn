#include <stdio.h> 

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company a = XEROX; 
    enum Company b = GOOGLE; 
    enum Company c = EBAY; 

    printf("a: %d\nb: %d\nc: %d\n", a, b, c);

    return 0; 
}
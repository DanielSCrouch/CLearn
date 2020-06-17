#include <stdio.h> 

int len(const char s[100]);
void strcat2(char result[], const char str1[], const char str2[]);
_Bool streq(const char str1[], const char str2[]);

int main()
{
    char str1[100];  
    char str2[100];  
    char result[200];  

    printf("Enter a string of size < 100: ");
    scanf("%s", str1); 

    int l = len(str1); 
    printf("Len is: %d\n", l);

    printf("Enter another string of size < 100: ");
    scanf("%s", str2); 

    strcat2(result, str1, str2);
    printf("Cat is: %s\n", result);

    if (streq(str1, str2))
        printf("Strings are equal\n");
    else 
        printf("Strings are not equal\n");

}

int len(const char s[]) 
{
    int i; 
    for(i = 0; s[i] != '\0'; i++); 
    return i;
}

void strcat2(char result[], const char str1[], const char str2[])
{
    int i, j; 
    for(i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];
    for(j = 0; str2[j] != '\0'; j++)
        result[i + j] = str2[j];
    result[i + j] = '\0';
}

_Bool streq(const char str1[], const char str2[]) 
{
    int i, j; 
    int l1 = len(str1);
    int l2 = len(str2); 
    if (l1 != l2) {
        return 0;
    }
    else
        for (i = 0; str1[i] != '\0'; i++)
            if (str1[i] != str2[i])
                return 0;
    return 1;
    
}


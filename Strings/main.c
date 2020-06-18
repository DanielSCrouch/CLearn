#include <stdio.h> 
#include <string.h> 

int len(const char s[100]);
void strcat2(char result[], const char str1[], const char str2[]);
_Bool streq(const char str1[], const char str2[]);
const char* strrev(const char str[]);
void strsort(const char str1[], const char str2[], const char str3[]);
int strcmp(const char *str1, const char *str2);

int main()
{
    // char str1[100];  
    // char str2[100];  
    // char str3[100]; 
    // char result[200];  

    // printf("Enter a string of size < 100: ");
    // scanf("%s", str1); 

    // int l = len(str1); 
    // printf("Len is: %d\n", l);

    // printf("Enter another string of size < 100: ");
    // scanf("%s", str2); 

    // strcat2(result, str1, str2);
    // printf("Cat is: %s\n", result);

    // if (streq(str1, str2))
    //     printf("Strings are equal\n");
    // else 
    //     printf("Strings are not equal\n");

    // printf("Enter a string to reverse of size < 100: ");
    // scanf("%s", str3);

    // printf("Reversed string: %s\n", strrev(str3)); 

    char str4[] = "Zero";
    char str5[] = "Two";
    char str6[] = "One";

    strsort(str4, str5, str6); 

    

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

const char* strrev(const char str[]) 
{
    int i; 
    int len = strlen(str);
    char res[len];
    for (i = 0; i < len; i++)
        res[i] = str[len - 1 - i]; 
    char *resP = res;
    return resP; 
}

void strsort(const char str1[], const char str2[], const char str3[]) 
{   
    int n = 3; 
    char o1[100]; 
    char o2[100]; 
    char o3[100]; 
    char temp[100]; 
    _Bool unsorted = 1; 

    strcpy(o1, str1); 
    strcpy(o2, str2); 
    strcpy(o3, str3);

    while(unsorted) {
        unsorted = 0; 
        if (strcmp(o1, o2) > 1) {
            strcpy(temp, o1); 
            strcpy(o1, o2); 
            strcpy(o2, temp); 
            unsorted = 1; 
        }
        if (strcmp(o2, o3) > 1) {
            strcpy(temp, o2); 
            strcpy(o2, o3); 
            strcpy(o3, temp); 
            unsorted = 1; 
        }

        printf("Str1: %s \t Str2: %s \t Str3: %s\n", str1, str2, str3);
        printf("Str1: %s \t Str2: %s \t Str3: %s\n", o1, o2, o3);

    }

}


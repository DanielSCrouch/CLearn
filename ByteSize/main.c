#include <stdio.h> 

/* 
Program to print the byte sizes of common data types (varies by machine)
*/

int main() 
{
    int i; 
    char c; 
    char *s; 
    float f; 
    double d; 
    long int li; 
    short int si; 
    unsigned u; 
    _Bool b; 

    printf("Byte size of int: %ld\n", sizeof(i));
    printf("Byte size of char: %ld\n", sizeof(c)); 
    printf("Byte size of string: %ld\n", sizeof(s)); 
    printf("Byte size of float: %ld\n", sizeof(f)); 
    printf("Byte size of double: %ld\n", sizeof(d)); 
    printf("Byte size of long integer: %ld\n", sizeof(li)); 
    printf("Byte size of short integer: %ld\n", sizeof(si)); 
    printf("Byte size of unsigned: %ld\n", sizeof(u)); 
    printf("Byte size of bool: %ld\n", sizeof(b)); 

}


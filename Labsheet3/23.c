//Write a program to compare two strings and display larger one.
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    len1 = strlen(str1); 
    len2 = strlen(str2); 

    if (len1 > len2) 
    {
        printf("The larger string by length is: %s\n", str1);
    } 
    else if (len2 > len1) 
    {
        printf("The larger string by length is: %s\n", str2);
    } 
    else 
    {
        printf("Both strings are equal in length.\n");
    }
}

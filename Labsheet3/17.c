// Write a program that accept a string from user and toggle the case of alphabet
#include<stdio.h>
void main()
{
    int i;
    char str[100];
    printf("Enter a String:");
    gets(str);
    for (i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;

        else if (str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
    printf("String with toggle case:%s",str);
}
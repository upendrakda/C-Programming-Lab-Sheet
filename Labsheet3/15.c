//Write a program that accept a string from user and display the content in upper case.
#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("enter string in lowercase:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("String in UPPERCASE:%s",str);
}
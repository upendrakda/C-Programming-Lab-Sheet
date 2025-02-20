//Write a program that accept a string from user and display the content in lower case.
#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter string in UPPERCASE:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("String in lowercase:%s",str);
}
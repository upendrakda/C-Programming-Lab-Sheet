//Write a program that accept the string and display it in reverse order using
//and without using strrev( ) function..
#include<stdio.h>
#include<string.h>
void main()
{
    int i, len;
    char str[100], strreverse[100];
    printf("Without using strrev() function\n");
    printf("Enter a string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        strreverse[i]=str[len-1-i];
    }
    strreverse[i]='\0';
    printf("Reversed string:%s",strreverse);
}


#include<stdio.h>
#include<string.h>
void main()
{
    int i, len;
    char str[100];
    printf("Using strrev() function\n");
    printf("Enter a string:");
    scanf("%s",str);
    strrev(str);
    printf("Reversed string:%s",str);
}
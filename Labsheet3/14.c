//Write a program to find length of string input from user using and without using 
//library function strlen( ).
#include<stdio.h>
void main()
{
    int i, length=0;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of the string:%d",length);
}
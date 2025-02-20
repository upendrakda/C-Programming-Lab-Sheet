//Write a program that accept a string and display its ascii value.
#include<stdio.h>
void main()
{
    int i;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    printf("ASCII values:");
    for(i=0;str[i]!='\0';i++)
    {
        printf("\n%c: %d",str[i],str[i]);
    }
}
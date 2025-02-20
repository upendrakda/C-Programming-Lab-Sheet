//Write a program to concatenate two strings without using string handling 
//built in function.
#include<stdio.h>
void main()
{
    char str1[100], str2[100], str3[100];
    int i, j;
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    str3[i]=str1[i];

    str3[i]=' ';
    i++;

    for(j=0;str2[j]!='\0';j++,i++)
    str3[i]=str2[j]; 

    str3[i]='\0';

    printf("Concatinated string:%s",str3);
}
//Write a program to input a string and count number of vowels present in the string.
#include<stdio.h>
#include<string.h>
void main()
{
    int n, i, count=0;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        count++;
    }
    printf("Total number of vowels:%d",count);
}
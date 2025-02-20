//Write a program that determines how many lower case, upper case and 
//space are in a given string.
#include<stdio.h>
void main()
{
    int i, lower=0, upper=0, space=0;
    char str[100];
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        lower++;

        else if(str[i]>='A' && str[i]<='Z')
        upper++;

        else if(str[i]==' ')
        space++;
    }
    printf("Total uppercase: %d\nTotal lowercase: %d\nTotal spaces: %d",upper,lower,space);
}
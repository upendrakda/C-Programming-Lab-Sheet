//Write a program that determines the string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
    int i, length, palindrome=1;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome)
    printf("Palindrome");

    else
    printf("Not a palindrome");
}
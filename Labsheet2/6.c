//Write a program to calculate factorial of a given number.
#include<stdio.h>
void main()
{
    int n, i, facto=1;
    printf("Enter a number to calculate factorial:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        facto=facto*i;
    }
    printf("Factorial of %d=%d",n,facto);
}
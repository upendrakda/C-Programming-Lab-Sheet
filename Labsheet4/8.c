//Write a program to calculate sum of the series 1+2+3+4+…………+n using recursive function.
#include<stdio.h>
int sum(int);
void main()
{
    int num, result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=sum(num);
    printf("Sum up to %d= %d", num, result);
}
int sum(int n)
{
    if (n<1)
    return 0;
    else
    return (n+sum(n-1));
}
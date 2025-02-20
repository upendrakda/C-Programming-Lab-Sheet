//Write a program to display factorial of a given number using recursive function.
#include<stdio.h>
int fact(int);
void main()
{
    int num, result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=fact(num);
    printf("Factorial of %d= %d",num, result);
}
int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    else
    return (n*fact(n-1));
}
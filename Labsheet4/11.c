//Write a program to find the sum of first twenty natural numbers using function.
#include<stdio.h>
int sum();
void main()
{
    int s;
    printf("The sum of first 20 natural numbers using function:");
    s=sum();
    printf("\nSum= %d",s);
}
int sum()
{
    int i, sum=0;
    for(i=1; i<=20; i++)
    {
        sum+=i;
    }
    return sum;
}
//Write a program to find the sum of digits of any number.
#include<stdio.h>
void main()
{
    int num, rem, sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digits=%d",sum);
}
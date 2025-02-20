//Write a program to fond the product of digits of any number.
#include<stdio.h>
void main()
{
    int num, rem, pro=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        pro=pro*rem;
        num=num/10;
    }
    printf("Product of digits=%d",pro);
}
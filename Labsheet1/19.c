//Write a program that ask a number and print the remainder after
//dividing the number by 5.
#include<stdio.h>
void main()
{
    int num, rem;
    printf("Enter a number:");
    scanf("%d",&num);
    rem=num%5;
    printf("Remainder after dividing the number by 5=%d",rem);
}
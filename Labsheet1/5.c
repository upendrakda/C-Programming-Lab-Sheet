// Write a program to divide one integer by another integer and
// find the quotient and remainder.
#include<stdio.h>
void main()
{
    int a, b, quo, rem;
    printf("Enter one integer:");
    scanf("%d",&a);
    printf("Enter another integer:");
    scanf("%d",&b);
    quo=a/b;
    rem=a%b;
    printf("Quotient=%d\nRemainder=%d",quo, rem);
}
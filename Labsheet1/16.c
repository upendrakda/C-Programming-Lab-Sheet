//Two number are entered through keyboard and if the first number is
//greater than second number then print the sum of number otherwise print
//the difference of number (use tannery operator)
#include<stdio.h>
void main()
{
    int a, b, sum, diff, cond;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    cond=(a>b)?sum:diff;
    printf("Result=%d",cond);
}
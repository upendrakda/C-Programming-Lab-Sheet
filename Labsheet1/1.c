// Write a program to find addition, subtraction, multiplication and division
// of two numbers entered by the user.
#include<stdio.h>
void main()
{
    int a, b, sum, diff, pro, div;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    div=a/b;
    printf("Addition=%d \nSubtraction=%d \nMultiplication=%d \nDivision=%d",sum,diff,pro,div);
}
//Two numbers are entered through the keyboard.
//Write a program to find the value of one number raise to the power of another.
#include<stdio.h>
#include<math.h>
void main()
{
    int a, b;
    double result;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter power for number:");
    scanf("%d",&b);
    result=pow(a,b);
    printf("Result=%.2f",result);
}
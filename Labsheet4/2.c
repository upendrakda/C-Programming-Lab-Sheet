//Write a program to find out the largest among three numbers using user defined function.
#include<stdio.h>
int largest(int a, int b, int c);
void main()
{
    int x,y,z,result;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Enter third number:");
    scanf("%d",&z);
    result=largest(x,y,z);
    printf("Largest number=%d",result);
}
int largest(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
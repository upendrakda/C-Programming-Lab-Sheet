//Write a program to generate Fibonacci series.
#include<stdio.h>
void main()
{
    int i, a, b=1, c=0;
    printf("Fibonacci series:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}
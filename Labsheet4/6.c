//Write a program to calculate a raised to power b using user defined function 
//with following prototype int power(int,int).
#include<stdio.h>
int power(int ,int );
void main()
{
    int a, b;
    long int result;
    printf("Enter base number:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    result=power(a,b);
    printf("Result=%ld",result);
}
int power(int x, int y)
{
    int i;
    long int value=1;
    for(i=0;i<y;i++)
    {
        value*=x;
    }
    return value;
}

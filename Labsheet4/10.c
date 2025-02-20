//Write a program to calculate a raised to the power b using recursive function.
#include<stdio.h>
int power(int, int);
void main()
{
    int a, b, result;
    printf("Enter base number:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    result=power(a,b);
    printf("Result= %d",result);
}
int power(int x, int y)
{
    if(y==0)
    return 1;
    else
    return(x*power(x,y-1));
}
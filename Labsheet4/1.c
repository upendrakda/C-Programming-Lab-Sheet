//Write a program to accept two numbers perform addition, subtraction,
//multiplication, division between them using user defined function 
//called add( ), sub( ), div( ) and mul( ).
#include<stdio.h>
void add(int x, int y);
void sub(int x, int y);
void divide(int x, int y);
void mul(int x, int y);
void main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    add(a,b);
    sub(a,b);
    divide(a,b);
    mul(a,b);
}

void add(int x, int y)
{
    int add;
    add=x+y;
    printf("Sum=%d\n",add);
}

void sub(int x, int y)
{
    int sub;
    sub=x-y;
    printf("Difference=%d\n",sub);
}

void divide(int x, int y)
{
    int div;
    div=x/y;
    printf("Division=%d\n",div);
}

void mul(int x, int y)
{
    int mul;
    mul=x*y;
    printf("Product=%d\n",mul);
}
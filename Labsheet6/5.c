//Write a program to exchange to value using the pointer. (Call by address)
#include<stdio.h>
void swap(int *x, int *y);
void main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Values before sawpping: a=%d \t b=%d",a,b);
    swap(&a,&b);
    printf("\nValues after sawpping: a=%d \t b=%d",a,b);
}
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
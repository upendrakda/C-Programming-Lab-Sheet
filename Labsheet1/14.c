//Two numbers are input through the keyboard. Write a program to
//interchange the the contents.
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Values before swapping:\nnum1=%d\tnum2=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nValues after swapping:\nnum1=%d\tnum2=%d",a,b);
}
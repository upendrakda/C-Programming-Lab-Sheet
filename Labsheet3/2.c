//Write a program to enter 10 different numbers and print them with array
//variables and their addresses.
#include<stdio.h>
void main()
{
    int num[10], i;
    printf("Enter 10 numbers.\n");
    for(i=0;i<10;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&num[i]);
    }
    printf("Printing them with array variables and address.\n");
    for(i=0;i<10;i++)
    {
        printf("num[%d]=%d\tAddress=%d\n",i,num[i],&num[i]);
    }
}
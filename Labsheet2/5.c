//Write a program to print all the numbers from 10 to 1 and find
//their sum using while loop.
#include<stdio.h>
void main()
{
    int sum=0, i=10;
    printf("Numbers fro 10 to 1:\n");
    while (i>0)
    {
        printf("%d\t",i);
        sum+=i;
        i--;
    }
    printf("\nSum=%d",sum);
}
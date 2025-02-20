//Write a program that asks user to enter 10 numbers, read them into an array
//and finds the sum, product, average and maximum of all numbers and prints them.
#include<stdio.h>
void main()
{
    int num[10], i, sum=0, pro=1, max;
    float avg;
    printf("Enter 10 numbers.\n");
    for(i=0;i<10;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=0;i<10;i++)
    {
        sum=sum+num[i];
        pro=pro*num[i];
        if(max<num[i])
        max=num[i];
    }
    avg=sum/10.0;
    printf("Sum=%d\tProduct=%d\tAverage=%.2f\tMaximum no.=%d",sum,pro,avg,max);
}
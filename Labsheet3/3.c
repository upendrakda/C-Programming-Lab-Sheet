//Write a program to accept 10 numbers and finds and prints the largest and
//smallest among those numbers.
#include<stdio.h>
void main()
{
    int num[10], i, max, min;
    for(i=0;i<10;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++)
    {
        if(max<num[i])
        max=num[i];
        if(min>num[i])
        min=num[i];
    }
    printf("Maximum number:%d\tMinimum number:%d",max,min);
}
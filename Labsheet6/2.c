//Write a program to find the sum of all the elements of an array using pointer.
#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int i, *p, sum=0;
    p=arr;
    for(i=0; i<5; i++)
    {
        sum=sum + *p;
        p++;
    }
    printf("Sum of array elements= %d",sum);
}
//Write a program to copy contents of one array into another in reverse order.
#include<stdio.h>
void main()
{
    int arr[100], revarr[100], i, n;
    printf("Enter total number of array elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        revarr[i]=arr[n-i-1];
    }
    printf("Array elements in reverse order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",revarr[i]);
    }
}
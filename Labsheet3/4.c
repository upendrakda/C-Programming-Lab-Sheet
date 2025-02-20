//Write a program that asks user to enter 10 numbers and sorts them in an
//ascending order and display the sorted number.
#include<stdio.h>
void main()
{
    int num[10], i, j, temp;
    printf("Enter 10 numbers.\n");
    for(i=0;i<10;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
            
        }
    }
    printf("Numbers in ascending order:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",num[i]);
    }
}
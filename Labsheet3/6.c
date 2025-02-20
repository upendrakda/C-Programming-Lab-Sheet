//Write a program that accepts the marks of BscCSIT-I semester student 
//in C- programming. Now display the marks in descending order. Also display 
//maximum and minimum marks.
#include<stdio.h>
void main()
{
    int marks[100], i, j, n, temp, max, min;
    printf("Enter number of students of BscCSIT-I:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks of student number %d:",i+1);
        scanf("%d",&marks[i]);
    }
    // max=marks[0];
    // min=marks[0];
    for(i=0;i<n;i++)
    {
        // if(max<marks[i])
        // max=marks[i];
        // if(min>marks[i])
        // min=marks[i];
        for(j=i+1;j<n;j++)
        {
            if (marks[i]<marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
            
        }
    }
    printf("Marks in descending order:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",marks[i]);
    }
    max=marks[0];
    min=marks[n-1];
    printf("\nMaximum marks=%d\nMinimum marks=%d",max,min);
}
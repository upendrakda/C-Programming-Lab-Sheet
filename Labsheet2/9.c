//Write a program to display Multiplication table from 1-10.
#include<stdio.h>
void main()
{
    int i, j, m;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            m=i*j;
            printf("%d*%d=%d\t",j,i,m);
        }   
        printf("\n");
    }
}
//Write a program to read a 2*3 matrix and display it on screen.
#include<stdio.h>
void main()
{
    int matrix[2][3],i, j;
    printf("Enter array elements.\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for %d%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Elements stored in array.\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
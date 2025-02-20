//Write a program to read two m*n matrices and display their sum, difference and product.
#include<stdio.h>
void main()
{
    int r, c, i, j, k;
    printf("Enter size of row:");
    scanf("%d",&r);
    printf("Enter size of column:");
    scanf("%d",&c);

    //read data
    int mat1[r][c], mat2[r][c], sum[r][c], diff[r][c], pro[r][c];
    printf("Enter array elements for first matrix.\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element for %d%d: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter array elements for second matrix.\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element for %d%d: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }


    //sum
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("Sum of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    //difference
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            diff[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    printf("Difference of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }

    //product
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            pro[i][j]=0;
            for(k=0;k<c;k++)
            {
                pro[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Product of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",pro[i][j]);
        }
        printf("\n");
    }
}
//Write a program to display square of given number if it is odd and cube if it is even.
#include<stdio.h>
void main()
{
    int n, sq, cu;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        cu=n*n*n;
        printf("Number is even so cube of %d= %d",n,cu);
    }
    else
    {
        sq=n*n;
        printf("Number is odd so square of %d= %d",n,sq);
    }
}
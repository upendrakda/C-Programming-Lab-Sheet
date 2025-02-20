//Write a program to check whether the given number is prime or not using 
//user defined function.
#include<stdio.h>
void prime(int n);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    prime(num);
}
void prime(int n)
{
    int i, count=0;
    for(i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count ++;
        }
    }
    if(count==2)
    printf("%d is prime",n);

    else
    printf("Not Prime");
}
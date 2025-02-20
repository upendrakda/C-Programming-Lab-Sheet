//Write a program to enter the numbers till the user wants and at the end
//it should display the count of positive, negative and zeros entered.
#include<stdio.h>
void main()
{
    int n, positive=0, negative=0, zero=0;
    char choice;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        if(n>0)
        positive++;
        else if (n<0)
        negative++;
        else
        zero++;
        printf("Do you want to continue entering number(Y if yes, N if no):");
        scanf(" %c",&choice);
    } while (choice=='y'||choice=='Y');
    printf("\nTotal positive numbers enterd:%d",positive);
    printf("\nTotal negative numbers enterd:%d",negative);
    printf("\nTotal zero enterd            :%d",zero);
}
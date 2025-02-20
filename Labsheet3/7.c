//Twenty-five numbers are entered through the keyboard into an array. 
//Write a program to find out how many of them are positive, how many are negative,
//how many are even and how many are odd.
#include<stdio.h>
void main()
{
    int num[25], i, positive=0, negative=0, even=0, odd=0;
    printf("Enter 25 numbers:\n");
    for (i=0;i<25;i++)
    {
        printf("Number %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<25;i++)
    {
        if(num[i]>0)
        positive++;
        
        if(num[i]<0)
        negative++;

        if(num[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Total numbers:\nPositive=%d\nNegative=%d\nEven=%d\nOdd=%d",positive,negative,even,odd);
}
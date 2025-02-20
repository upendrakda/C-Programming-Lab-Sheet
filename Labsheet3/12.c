//Write a program to read marks of 10 students and print out the top five.
#include<stdio.h>
void main()
{
    int std[10], i, j, temp;
    printf("Enter the marks of 10 students.\n");
    for(i=0;i<10;i++)
    {
        printf("Marks of student %d: ",i+1);
        scanf("%d",&std[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(std[i]<std[j])
            {
                temp=std[i];
                std[i]=std[j];
                std[j]=temp;
            }
        }
    }
    printf("Top 5 marks:");
    for(i=0;i<5;i++)
    {
        printf("\n%d",std[i]);
    }
}

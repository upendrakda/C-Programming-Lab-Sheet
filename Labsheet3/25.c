//Write a program to read names of 10 students and sort them in alphabetical order.
#include<stdio.h>
#include<string.h>
void main()
{
    int  i, j;
    char name[20][20], temp[20];
    printf("Enter name of 10 students.\n");
    for(i=0;i<10;i++)
    {
        printf("Student %d:",i+1);
        scanf("%s",name[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
            
        }
    }
    printf("Numbers in ascending order:\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n",name[i]);
    }
}
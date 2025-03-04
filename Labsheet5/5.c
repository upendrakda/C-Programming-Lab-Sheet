// Write a program that reads different names and address into the computer 
// and sorts the names into alphabetical order using structure variables.
#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    char address[50];
};
void main()
{
    int i, j, n;
    printf("Enter total no. of person:");
    scanf("%d",&n);
    struct person per[n], temp;
    for(i=0;i<n;i++)
    {
        printf("Enter details for person %d",i+1);
        printf("\nName:");
        scanf("%s",per[i].name);
        printf("Address:");
        scanf("%s",per[i].address);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(per[i].name,per[j].name)>0)
            {
                temp=per[i];
                per[i]=per[j];
                per[j]=temp;
            }
        }
    }
    printf("\nDetails of person in ascending order");
    printf("\nName \tAddress");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%s",per[i].name, per[i].address);
    }
}
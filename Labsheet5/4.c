// Write a program to read the name, address and salary of 5 employee using array of 
// structure. Display information of each employee in ascending order of their name.
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    char address[50];
    float salary;
}emp[5];
void main()
{
    int i, j;
    struct employee temp;
    for(i=0;i<5;i++)
    {
        printf("Enter details for employee %d",i+1);
        printf("\nName:");
        scanf("%s",emp[i].name);
        printf("Address:");
        scanf("%s",emp[i].address);
        printf("Salary:");
        scanf("%f",&emp[i].salary);
    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(emp[i].name,emp[j].name)>0)
            {
                temp=emp[i];
                emp[i]=emp[j];
                emp[j]=temp;
            }
        }
    }
    printf("Details of employee in ascending order");
    printf("\nName \tAddress \tSalary");
    for(i=0;i<5;i++)
    {
        printf("\n%s\t%s\t%.2f",emp[i].name, emp[i].address, emp[i].salary);
    }
}
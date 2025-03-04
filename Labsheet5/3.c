// Write a program to read the name, rollno and mark of 5 students using array of structure. 
// Display the name and rollno of those students whose mark is greater than 50.
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
}std[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter details for student %d",i+1);
        printf("\nName:");
        scanf("%s",std[i].name);
        printf("Roll no.");
        scanf("%d",&std[i].roll);
        printf("Marks:");
        scanf("%d",&std[i].marks);
    }
    printf("Details of students whose marks  is greater then 50");
    for(i=0;i<5;i++)
    {
        if(std[i].marks>50)
        {
            printf("\nName= %s\t Roll= %d",std[i].name, std[i].roll);
        }
    }
}
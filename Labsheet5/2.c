// Create a structure named student that has name, roll, marks and remarks as members. 
// Assume appropriate types and size of member. Write a program using structure to read 
// and display the data entered by the user.
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
    char remarks[50];
};
void main()
{
    int n, i;
    printf("Enter total no. of students:");
    scanf("%d",&n);

    struct student std[n];
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d",i+1);
        printf("\nName:");
        scanf("%s",std[i].name);
        printf("Roll no.:");
        scanf("%d",&std[i].roll);
        printf("Marks:");
        scanf("%d",&std[i].marks);
        printf("Remarks:");
        scanf("%s",std[i].remarks);
    }
    
    printf("\n--Student Marks Sheet--");
    for(i=0;i<n;i++)
    {
        printf("\nName: %s\t Roll no.: %d \t Marks: %d \t Remarks: %s",std[i].name,std[i].roll,std[i].marks,std[i].remarks);
    }
}
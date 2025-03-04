// Write a program to display the following data in proper manner using structure.
//    Name     Total   Marks Grade
// a. Ram       100        C
// b. Sita      120        B
// c. Gita      130        B
// d. Gopal     150        A
#include<stdio.h>
struct student
{
    char name[20];
    int marks;
    char grade;
};
void main()
{
    int i;
    struct student std[4]= {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}
    };
    printf("Name\tTotal\tMarks Grade");
    for(i=0;i<4;i++)
    {
        printf("\n%s\t%d\t%c",std[i].name,std[i].marks,std[i].grade);
    }
}

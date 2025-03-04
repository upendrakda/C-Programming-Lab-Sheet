// Define a structure Employee and its variable called Person1 and initialize it to 
// “Hari”, with a salary of $50,000, who was hired on March 10, 2001.( use structure 
// with in structure).
#include<stdio.h>
struct date
{
    char month[10];
    int day;
    int year;
};
struct employee
{
    char name[20];
    float salary;
    struct date d;
};
void main()
{
    struct employee person1={"Hari",50000,{"March",10,2001}};
    printf("Employee Details:");
    printf("\nName: %s",person1.name);
    printf("\nSalary: $%.2f",person1.salary);
    printf("\nHired Date: %s %d, %d",person1.d.month,person1.d.day,person1.d.year);
}
// Write a program to define a structure Date and declare its variable called 
// Date1 and initialize it to February 25, 1957, in the correct format.
#include<stdio.h>
struct date
{
    char month[10];
    int day;
    int year;
};
int main()
{
    struct date date1={"February",25,1957};
    printf("Date: %s %d, %d",date1.month,date1.day,date1.year);
    return 0;
}
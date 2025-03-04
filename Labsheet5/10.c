// Define a structure called date with three elements day, month and year. 
// Write a program to enter the date and print it.
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
}d;
int main()
{
    printf("Enter year:");
    scanf("%d",&d.year);
    printf("Enter month:");
    scanf("%d",&d.month);
    printf("Enter day:");
    scanf("%d",&d.day);
    printf("Date(y/m/d): %d / %d / %d",d.year,d.month,d.day);
    return 0;
}
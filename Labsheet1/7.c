//Write a program to convert entered number of days into years, months and days.
#include<stdio.h>
void main()
{
    int tday, year, month, days;
    printf("Enter the total number of days:");
    scanf("%d",&tday);
    year=tday/365;
    month=(tday%365)/30;
    days=(tday%365)%30;
    printf("%d years %dmonths %ddays",year, month, days);
}
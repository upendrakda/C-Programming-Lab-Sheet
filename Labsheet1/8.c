//Write a program to convert length from mm to km, m, cm and mm.
#include<stdio.h>
void main()
{
    int tmm, km, m, cm, mm;
    printf("Enter total length on mm:");
    scanf("%d",&tmm);
    km=tmm/1000000;
    m=(tmm%1000000)/1000;
    cm = (tmm % 1000) / 10;
    mm = tmm % 10;
    printf("%d km %d m %d cm %d mm",km, m, cm, mm);
}
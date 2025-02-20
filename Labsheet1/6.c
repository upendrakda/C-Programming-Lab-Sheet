//Write a program to convert entered number of seconds into hours, minutes and seconds.
#include<stdio.h>
void main()
{
    int ts, hours, min, sec;
    printf("\aEnter total number of seconds:");
    scanf("%d",&ts);
    hours=ts/3600;
    min=(ts%3600)/60;
    sec=ts%60;
    printf("Time: %dhours %dminutes %dseconds",hours,min,sec);
}
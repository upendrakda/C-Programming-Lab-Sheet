//If the marks obtained by a student in five different subjects are input through
//the keyboard, find out the aggregate marks and percentage marks obtained by the
//student. Assume that the maximum marks obtained by a student in each subject are 100.
#include<stdio.h>
void main()
{
    int i, sub1, sub2, sub3, sub4, sub5, agg, per;
    printf("Enter the marks obtained in first subject:");
    scanf("%d",&sub1);
    printf("Enter the marks obtained in second subject:");
    scanf("%d",&sub2);
    printf("Enter the marks obtained in third subject:");
    scanf("%d",&sub3);
    printf("Enter the marks obtained in fourth subject:");
    scanf("%d",&sub4);
    printf("Enter the marks obtained in fifth subject:");
    scanf("%d",&sub5);
    agg=sub1+sub2+sub3+sub4+sub5;
    per=agg/5;
    printf("Aggregate marks=%d\nPercentage=%d",agg,per);
}
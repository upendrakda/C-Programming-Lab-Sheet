//Write a program to read three sides of a triangle and calculate the area.
#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c,s, area;
    printf("Enter 3 number:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle:%.2f",area);
}
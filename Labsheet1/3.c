//Write a Program to calculate the area and circumference of the circle.
#include<stdio.h>
void main()
{
    float r, pi, area, circum;
    pi=3.1415;
    printf("Enter the radius of a circle:");
    scanf("%f",&r);
    area=pi*r*r;
    circum=2*pi*r;
    printf("Area of circle=%f m.sq. \nCircumference of circle:%f m.",area,circum);
}
//Write a program to calculate the surface area of cube.
#include<stdio.h>
void main()
{
    int l, area;
    printf("Enter the length of a cube:");
    scanf("%d",&l);
    area=6*l*l;
    printf("Area of cube=%d m.sq.",area);
}
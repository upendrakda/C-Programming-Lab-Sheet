// The length and breadth are input through the keyboard. Write a program
// to calculate the area and perimeter of the rectangle.
#include<stdio.h>
void main()
{
    int l, b, area, peri;
    printf("Enter the length of a rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of a rectangle:");
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    printf("Area=%d m.sq. \nPerimeter=%d m.",area, peri);
}
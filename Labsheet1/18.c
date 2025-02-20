//Write a program that ask the radius of sphere and print the volume of sphere.
#include<stdio.h>
void main()
{
    float r, vol, pi=3.1415;
    printf("Enter the radius of a sphere:");
    scanf("%f",&r);
    vol=(4.0/3.0)*pi*(r*r*r);
    printf("Volume of sphere=%.2f",vol);
}
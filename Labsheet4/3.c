//Write a function which receives a float and int from main(), finds the product
//of these two and returns the product which is printed through main.
#include<stdio.h>
float fun(float a, int b);
void main()
{
    float x, result;
    int y;
    printf("Enter floating point number:");
    scanf("%f",&x);
    printf("Enter integer number:");
    scanf("%d",&y);
    result=fun(x,y);
    printf("Product=%.2f",result);
}
float fun(float a, int b)
{
    float pro;
    pro=a*b;
    return pro;
}
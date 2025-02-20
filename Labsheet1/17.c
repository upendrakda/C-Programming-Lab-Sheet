//Entered a number in decimal and print it in octal and hexadecimal.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter dsecimal number:");
    scanf("%d",&a);
    printf("Decimal:%d",a);
    printf("\nOctal:%o",a);
    printf("\nHexadecimal:%X",a);
}
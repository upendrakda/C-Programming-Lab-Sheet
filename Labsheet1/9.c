//Write a program to input three digit numbers and reverse the number.
#include<stdio.h>
void main()
{
    int num, reversed = 0, digit;
    printf("Enter a number:");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
}
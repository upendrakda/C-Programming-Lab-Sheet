//If a five-digit number is entered through the keyboard, write a program
//to calculate the sum of its digits.
#include<stdio.h>
void main()
{
    int num, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Invalid input! Please enter a five-digit number.\n");
        return;
    }
    while (num > 0) 
    {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add it to the sum
        num = num / 10;    // Remove the last digit
    }
    printf("Sum of the digits = %d\n", sum);
}
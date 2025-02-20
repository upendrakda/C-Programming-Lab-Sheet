//Write a program to print out all Armstrong numbers between 1 and 500.
#include<stdio.h>
#include<math.h>

void main()
{
    int num, originalNum, remainder, sum, digits, i;
    printf("Armstrong numbers between 1 and 500 are:\n");
    for (i = 1; i <= 500; i++)
    {
        sum = 0;
        digits = 0;
        originalNum = i;
        while (originalNum != 0)
        {
            originalNum /= 10;
            digits++;
        }

        originalNum = i;

        while (originalNum != 0)
        {
            remainder = originalNum % 10; // Extract the last digit
            sum += pow(remainder, digits); // Add power of the digit
            originalNum /= 10; // Remove the last digit
        }

        if (sum == i)
        {
            printf("%d\t", i);
        }
    }
}

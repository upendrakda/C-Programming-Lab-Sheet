//Write a program to find factorial of a given number using user defined 
//function named long int factorial(int,int).
#include<stdio.h>
long int factorial(int n, int result);  // Function prototype

int main() 
{
    int num;
    long int fact;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Factorial calculation
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(num, 1);  // Initial result is 1
        printf("Factorial of %d is %ld\n", num, fact);
    }

    return 0;
}

// Recursive factorial function
long int factorial(int n, int result) {
    if (n == 0 || n == 1)
    {
        return result;
    }
    return factorial(n - 1, result * n);
}

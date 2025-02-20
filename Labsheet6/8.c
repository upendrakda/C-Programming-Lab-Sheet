//Write a program to read number of employees, n, working in a company. Reserve 
//the memory required to store age of employees using malloc() function. Read age 
//of n employees from user and count the number of employees of age above 80 years
#include <stdio.h>

int main() 
{
    int n, i, count = 0;
    int *ages;

    // Read number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    ages = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (ages == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read ages of employees
    printf("Enter the age of %d employees:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", ages + i);
    }

    // Count employees older than 80
    for (i = 0; i < n; i++) 
    {
        if (*(ages + i) > 80) 
        {
            count++;
        }
    }

    // Display result
    printf("Number of employees older than 80: %d\n", count);

    // Free dynamically allocated memory
    free(ages);

    return 0;
}

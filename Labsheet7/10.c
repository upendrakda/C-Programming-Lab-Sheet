// Write a program that asks user for 10 numbers and stores them in an array. Write this 
// array to a file and read it to display on the screen.
#include <stdio.h>

int main()
{
    int numbers[10];

    // Asking user for 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Writing the numbers to a file
    FILE *file = fopen("numbers.dat", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(file, "%d\n", numbers[i]);
    }
    fclose(file);

    // Reading the numbers from the file and displaying them
    file = fopen("numbers.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nNumbers from the file:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    fclose(file);
    return 0;
}
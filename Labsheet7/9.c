// Write a program to create a data file and write the natural numbers 1 to 20 to this 
// file and then read the numbers from the file to display the twice of the stored numbers.
#include <stdio.h>

int main()
{
    FILE *file = fopen("numbers.dat", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 1; i <= 20; i++)
    {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    file = fopen("numbers.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Twice of stored numbers:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num * 2);
    }
    fclose(file);
    return 0;
}
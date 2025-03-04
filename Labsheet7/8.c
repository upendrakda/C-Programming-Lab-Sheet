// Write a program to write and read even numbers between 10 and 50 to a file named 
// evennumbers.txt in d:\test\evennumbers.txt.
#include <stdio.h>

int main()
{
    FILE *file = fopen("D:\\test\\evennumbers.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file. Ensure 'D:\\test\\' exists.\n");
        return 1;
    }

    for (int i = 10; i <= 50; i += 2)
    {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    file = fopen("D:\\test\\evennumbers.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Even numbers from file:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    fclose(file);
    return 0;
}
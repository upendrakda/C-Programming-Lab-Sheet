// Write a program to store string to the data file “new1.dat” and display the same 
// content on the monitor reading from the data file.
#include <stdio.h>

int main()
{
    FILE *file = fopen("new1.dat", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char text[100];

    printf("Enter a string to store in file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);
    fclose(file);

    file = fopen("new1.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nFile Content:\n");
    while (fgets(text, sizeof(text), file) != NULL)
    {
        printf("%s", text);
    }
    fclose(file);
    return 0;
}
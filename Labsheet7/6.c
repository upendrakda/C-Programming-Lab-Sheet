// Write a program read name, address, and telephone, save it in a file and display 
// them on the screen.
#include <stdio.h>

int main()
{
    FILE *file = fopen("contact.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char name[50], address[100], telephone[20];

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter Telephone: ");
    fgets(telephone, sizeof(telephone), stdin);

    fprintf(file, "Name: %sAddress: %sTelephone: %s", name, address, telephone);
    fclose(file);

    file = fopen("contact.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nSaved Data:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
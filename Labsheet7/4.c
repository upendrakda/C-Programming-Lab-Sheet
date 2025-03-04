// Write a program to append some text to a certain file. Take name from user.
#include <stdio.h>

int main()
{
    char filename[100], text[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, file);
    fclose(file);

    printf("Text appended successfully.\n");

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Updated File Content:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
    return 0;
}

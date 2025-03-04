// Write a program to write and read string using character I/O.
#include <stdio.h>
#include <stdlib.h>

int main() 
{

    FILE *fp;
    char ch;

    fp = fopen("test.txt", "w"); 
    if (fp == NULL) 
    {
        printf("Could not open file for writing!\n");
        exit(1);
    }

    printf("Enter a string to write to the file: ");
    while ((ch = getchar()) != '\n') 
    { 
        fputc(ch, fp);
    }
    fclose(fp); 

    fp = fopen("test.txt", "r"); 
    if (fp == NULL) 
    {
        printf("Could not open file for reading!\n");
        exit(1);
    }

    printf("\nReading from file:\n");
    while ((ch = fgetc(fp)) != EOF) 
    { 
        putchar(ch); 
    }
    fclose(fp); 

    return 0;
}

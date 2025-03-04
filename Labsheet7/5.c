// Write a program to create a file named student .txt in d:\test\ drive and write name, 
// roll, address and marks of a student to this file.
#include <stdio.h>

int main()
{
    FILE *file = fopen("D:\\test\\student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file. Make sure the directory exists.\n");
        return 1;
    }

    char name[50], address[100];
    int roll;
    float marks;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);
    getchar();

    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter marks: ");
    scanf("%f", &marks);

    fprintf(file, "Name: %sRoll No: %d\nAddress: %sMarks: %.2f\n", name, roll, address, marks);

    fclose(file);
    printf("Student data written to D:\\test\\student.txt successfully.\n");

    return 0;
}
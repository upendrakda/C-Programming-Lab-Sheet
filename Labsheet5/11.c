// Declare a structure template that holds student access information into the student 
// registration system. It should hold the 8 character student username, the student 9 
// character Id number, and the student 5 digit pin number. Write a program that ask the
// student information and display them to user.
#include <stdio.h>
struct StudentAccess {
    char username[9];  
    char studentId[10];
    int pin;
};

int main() 
{
    struct StudentAccess student;
    
    printf("Enter username (8 characters max): ");
    scanf("%8s", student.username);
    
    printf("Enter student ID (9 characters max): ");
    scanf("%9s", student.studentId);
    
    printf("Enter 5-digit pin: ");
    scanf("%d", &student.pin);
    
    // Display student information
    printf("\nStudent Information:\n");
    printf("Username: %s\n", student.username);
    printf("Student ID: %s\n", student.studentId);
    printf("PIN: %d\n", student.pin);
    
    return 0;
}

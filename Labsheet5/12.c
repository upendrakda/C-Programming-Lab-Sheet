// Define a structure called date with three elements day, month and year. 
// Write a program to enter the two date and print the difference.
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

// Function to calculate total days since 01/01/0000
int totalDays(struct date d) {
    return d.year * 365 + d.month * 30 + d.day;
}

int main() {
    struct date date1, date2;
    int diff;

    // Input first date
    printf("Enter date1 (year month day): ");
    scanf("%d %d %d", &date1.year, &date1.month, &date1.day);

    // Input second date
    printf("Enter date2 (year month day): ");
    scanf("%d %d %d", &date2.year, &date2.month, &date2.day);

    // Calculate difference in total days
    int totalDays1 = totalDays(date1);
    int totalDays2 = totalDays(date2);

    // Find the difference
    diff = totalDays2 - totalDays1;

    // Print the result
    if (diff < 0) {
        diff = -diff;  // If the difference is negative, make it positive
    }

    printf("Difference: %d days\n", diff);

    return 0;
}

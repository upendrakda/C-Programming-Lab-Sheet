//Write a program to read marks obtained by n student in a subject and display 
//the top five marks.
#include <stdio.h>

void sortDescending(int *arr, int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (*(arr + i) < *(arr + j)) 
            {  // Swap if earlier element is smaller
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() 
{
    int n, i;
    int *marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    marks = (int *)malloc(n * sizeof(int));
    if (marks == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read marks
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (marks + i));
    }

    // Sort marks in descending order
    sortDescending(marks, n);

    // Display top five marks
    printf("Top five marks:\n");
    for (i = 0; i < 5 && i < n; i++) { // Print up to 5 marks or available marks
        printf("%d\n", *(marks + i));
    }

    // Free allocated memory
    free(marks);

    return 0;
}

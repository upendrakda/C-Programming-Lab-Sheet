//Write a program to read matrix of size mxn entered by user, and display its 
//transpose matrix.
#include <stdio.h>

int main() 
{
    int m, n, i, j;
    int *matrix, *transpose;

    // Read matrix dimensions
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    // Allocate memory dynamically for the matrix and transpose matrix
    matrix = (int *)malloc(m * n * sizeof(int));
    transpose = (int *)malloc(n * m * sizeof(int));

    // Check if memory allocation is successful
    if (matrix == NULL || transpose == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", (matrix + i * n + j));
        }
    }

    // Compute the transpose
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            *(transpose + j * m + i) = *(matrix + i * n + j);
        }
    }

    // Display the transposed matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%d\t", *(transpose + i * m + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(matrix);
    free(transpose);

    return 0;
}

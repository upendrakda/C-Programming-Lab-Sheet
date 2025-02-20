//Write a program to add two matrices using pointers ( m by n size matrix).
#include <stdio.h>

int main() 
{
    int m, n;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    // Input for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", (*(A + i) + j));
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", (*(B + i) + j));
        }
    }

    // Matrix Addition using pointers
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            *(*(C + i) + j) = *(*(A + i) + j) + *(*(B + i) + j);
        }
    }

    // Printing the Resultant Matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d\t", *(*(C + i) + j));
        }
        printf("\n");
    }

    return 0;
}

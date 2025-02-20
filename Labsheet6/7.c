//Write a program that takes one dimensional array of n numbers and sorts the 
//elements in ascending order. Use dynamic memory allocations.
#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    int *arr;

    // Taking user input for size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory dynamically
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input for array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Sorting the array using Bubble Sort
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (*(arr + j) > *(arr + j + 1)) // Swap if the previous element is greater
            {                                
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");

    // Freeing dynamically allocated memory
    free(arr);

    return 0;
}

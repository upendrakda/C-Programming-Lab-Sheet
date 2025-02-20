//Write a program to read 10 numbers and reorders them in ascending order using function.
#include<stdio.h>

// Function to sort the array in ascending order
void sort(int num[], int size)
{
    int i, j, temp;
    for(i = 0; i < size; i++) 
    {
        for(j = i + 1; j < size; j++) 
        {
            if (num[i] > num[j]) 
            { // Swap if current element is greater
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}

void main() 
{
    int num[10], i;

    // Input 10 numbers
    printf("Enter 10 numbers.\n");
    for(i = 0; i < 10; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Call the sort function
    sort(num, 10);

    // Display the sorted numbers
    printf("Numbers in ascending order:\n");
    for(i = 0; i < 10; i++) 
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
}

//Write a program to print the size of pointers that holds the address of three 
//different type variables: int, float, char.
#include<stdio.h>
void main ()
{
    int *x;
    float *y;
    char *z;
    printf("Size of int: %d bytes\n",sizeof(x));
    printf("Size of float: %d bytes\n",sizeof(y));
    printf("Size of char: %d bytes\n",sizeof(z));
}
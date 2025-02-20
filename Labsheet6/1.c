//Write a program which defines three variables of different types: 
//char, float and int. Dispalys the memory address reserved by these variables.
#include<stdio.h>
void main()
{
    char c='a';
    float f=3.5;
    int i=9;
    printf("Address of char: %u",&c);
    printf("\nAddress of float: %u",&f);
    printf("\nAddress of int: %u",&i);
}
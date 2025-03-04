// Create a structure named book which has members name, pages and price. 
// Write a program to read name, no of pages and price of 5 books using array 
// of structure. Display the name, no of pages and price of most expensive book.
#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
}b[5];
void main()
{
    int i, max=0;
    for(i=0;i<5;i++)
    {
        printf("Enter details of book %d\n",i+1);
        printf("Name:");
        scanf("%s",b[i].name);
        printf("Pages:");
        scanf("%d",&b[i].pages);
        printf("Price:");
        scanf("%f",&b[i].price);
    }
    
    for(i=0;i<5;i++)
    {
        if(b[i].price > b[max].price)
        {
            max=i;
        }
    }

    printf("\nMost Expensive book:");
        printf("\nName: %s\t Pages: %d\t Price: %.2f",b[max].name,b[max].pages,b[max].price);
    
}
// Create a structure named book which has name, pages and price as member variables. 
// Read name of book, its pages and price as member variables. Read name of book, 
// its page number and price. Finally display these members value .Use pointer to 
// structure instead of structure itself to access member variable.
#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
};
void main()
{
    struct book b;
    struct book *bptr=&b;
    printf("Enter Book Name:");
    scanf("%s",bptr->name);
    printf("Enter Pages:");
    scanf("%d",&bptr->pages);
    printf("Enter Price:");
    scanf("%f",&bptr->price);

    printf("\nDetails of the book:");
    printf("\nName: %s\t Pages: %d\t Price: %.2f",bptr->name,bptr->pages,bptr->price);
}
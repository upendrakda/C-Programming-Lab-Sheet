// Write a program to open file “test.txt” created in previous question, read its content 
// and display it on screen.
#include<stdio.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("Could not open File!");
        return 0;
    }
    else
    {
        printf("File has opened.");
    }
    fgets(s,19,fp);
    printf("\nText from File is: %s",s);
    fclose(fp);
    return 0;
}
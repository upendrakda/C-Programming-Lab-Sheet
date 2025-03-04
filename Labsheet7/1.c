//Create a file named test.txt and write some text “Welcome to my college” to the file.
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","w");
    if(fp==NULL)
    {
        printf("Could not create file!");
        return 1;
    }
    else
    {
        printf("File is created.");
    }
    fputs("I study B.Sc. CSIT",fp);
    fclose(fp);
    return 0;
}
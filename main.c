#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\t    Copying of File");
    printf("\n");
    FILE *ptr1,*ptr2;
    char f1[1000],f2[1000];
    printf("\n\tEnter File-1 Name :");
    gets(f1);
    ptr1=fopen(f1,"r");
    if (ptr1==NULL)
    {
        printf("\n\t    File Not Found");
        exit(0);
    }
    printf("\n\tEnter File-2 Name :");
    gets(f2);
    printf("\n");
    ptr2=fopen(f2,"a");
    fputs("\n",ptr2);
    char ch;
    char store[100];
    store[0]="";
    int i=0;
    while((fscanf(ptr1,"%c",&ch))!=EOF)
    {
        if (ch!="\0")
        {
            store[i]=ch;
        }
        fputs(store,ptr2);
    }
    printf("\n\t     Content Copied\n");
    fclose(ptr1);
    fclose(ptr2);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * ptr;
    ptr=fopen("gade.txt","w");
    fputs("saurabh",ptr);
     fclose(ptr);   //After we write a string in a file . then we have to close file and reopen using the fopen function for read .otherwise it print garbage charcture.

    ptr=fopen("gade.txt","r");
    char c[10];
    fgets(c,9,ptr);
    printf("%s",c);
    fclose(ptr);

    return 0;
}
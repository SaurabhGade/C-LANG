#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * ptr=NULL;
    ptr=fopen("myFile.txt","w");  //We use 'w' mode for the write in the file priveasly we 'r' mode to only read the content form the file .
    fputc('s',ptr); //fputc will rewrite the myFile.txt and put 'x' in the file.
    fclose(ptr);  //we open file using fopen() for write so now we need to close the file and reopen for for the read.
    //so we can verify the changes which happened in the myFile.exe can see.

    ptr=fopen("myFile.txt","r"); //so here we reopen the file for read using 'r'.
    char c;
    c=fgetc(ptr); //and give the values to the veriable c.
    printf("The charcture we add in myFile is %c\n",c); //and here we printed the c.now updated myFile.txt contain willl be printed.
    return 0;
}
#include<stdio.h>
int main()
{
    FILE * ptr = NULL;
    ptr = fopen("myFile.txt","r"); //we use this syntx to read the file form the text.
    //And we the address of the txt file to the pointer .

    char c = fgetc(ptr); //->And here we use fgetc() to the read the characture from the file which we given to the pointer.
    printf("the characture I read was %c\n",c);

    c=fgetc(ptr);//here we agian initinalized fgetc to ptr so we can read next characture form the file.
    printf("The second characture in the text file is %c\n",c); //Now printf will printf the next charcture in the file.
    
    fclose(ptr); //We call the fclose() to the colse the file which we open for the read.
    //closing the opened file is also the work of the programmer.
    // so closing the opened file is also the important.
    
    return 0;
}
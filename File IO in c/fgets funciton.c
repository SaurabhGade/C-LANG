#include<stdio.h>
int main()
{
     FILE * ptr = NULL;
     ptr=fopen("myFile.txt","r");
    //If we want to read string from the so we need the  charcture arry.
    char str[5];
    fgets(str , 3 ,ptr); //we call the text file and here we going to print 3 charcture out of four so it will print 2/3 charchature.
    printf("The string is %s\n",str);
    fclose(ptr);
     return 0;
}
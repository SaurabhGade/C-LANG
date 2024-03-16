#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * ptr=NULL;
    ptr=fopen("mafile.txt","w");
    fputs("saurabh",ptr);
    fclose(ptr);
    ptr=fopen("myFile","r");
    char s[8];
    fgets(s , 4 , ptr);
    printf("The string which put in the myFile is %s",s);
    fclose(ptr);
    
    return 0;
}
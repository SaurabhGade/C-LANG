#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * ptr;
    ptr=fopen("gade.txt","r+"); //when we use r+ mode it will write your contain before your old contain . and first characture of your old contail well replaced with new contain.
    
    fputs("itachi uchiha",ptr); 
    fclose(ptr);
    return 0;
}
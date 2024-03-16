#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * ptr;
    ptr=fopen("gade.txt","w+");
    fputs(" itachi uchiha",ptr);
    fclose(ptr);
    return 0;
}
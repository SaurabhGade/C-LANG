#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * PTR;
    PTR = fopen("gade.txt","a+");
    fputs("SAURABH",PTR);
    return 0;
}
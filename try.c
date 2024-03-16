#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[]="this is the thing";
    char r[]="is";
    char * str = strstr(s,r);
    printf("%s",str);
    return 0;
}
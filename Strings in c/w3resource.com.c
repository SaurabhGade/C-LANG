#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="w3resource.com";
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c\t",string[i]);
    }
    

    return 0;
}
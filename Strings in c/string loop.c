#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[10]={'s','a','u','r','a','b','h','\0'};
    char a[]="saurabh gade";
    printf("Using for loop\t:");
    for (int i = 0; s[i] !='\0'; i++)
    {
        printf("%c",s[i]);
    }
    printf("\nUsing puts function\t:");

    puts(s);  //puts() Automatically change the line while in printf we have to use \n escape sequance.

    printf("\nUsing formet specifier\t: %s\n",s);
    printf("\nUsing double code\t:");
    puts(a);
    
    return 0;
}

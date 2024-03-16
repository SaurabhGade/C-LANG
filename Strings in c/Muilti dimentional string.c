#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][10];
    printf("Enter your full name\n");
    for (int i = 0; i < 3; i++)
    {
        gets(s[i]);
    }
    printf("The name you entered is\n");
    for (int i = 0; i < 3; i++)
    {
        puts(s[i]);
    }
    
    
    
    
    
    return 0;
}

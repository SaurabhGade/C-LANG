#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n;
int main()
{
    char *string1;
    string1=(char *)calloc(n,sizeof(char));
    printf("Enter the  size of string\n");
    scanf("%d",&n);
    scanf("%s",&string1);
    for (int i = 0; i < n; i++)
    {
        printf("%c",*(&string1[i]));
    }
    
    
    return 0;
}
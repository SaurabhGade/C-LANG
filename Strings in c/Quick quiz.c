#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="Ram";
    char b[]="Sham";
    char c[10];
    printf("%s is a frind of %s\n",a,b);
    puts( strcat(a,b));
    strcpy(c,strcat(a,b));
    puts(c);
    return 0;
}

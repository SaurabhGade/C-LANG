#include<stdio.h>
char* reverse (char *p)
{
    int l,i;
    char ch;
    for (l = 0; *(p+l)!='\0'; l++);
    
        for (i = 0; i < l/2; i++)
        {
            ch=*(p+i);
            *(p+i)=*(p+l-1-i);
            *(p+i-1-i)=ch;
        }
        return (p);
    
    
}
int main()
{
    char s[20]="computer";
    reverse(s);
    printf("%s",reverse(s));
}

//scanf not takes whites spaces because in the point view of scanf blank space's are dilimiter ie. data sepretor.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char* a=s;
    printf("Enter your name \n");
    gets(s);
    printf("Your name is :%s",s);
    printf("\naddress of first veriable of charcture array is : \n%d",&s[0]);
    printf("\nPrinting your name using pointer: %s",a);
    printf("\nThe address of the pointer is :%p",&a);
    printf("\nUsing the address of string s : %s",&s);

    return 0;
}

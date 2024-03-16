#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int inCreament (int x);
int main()
{
    int (*p)(int);
    p=&inCreament;
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("Increamented value:%d\n",p(x));
    
    return 0;
}
int inCreament (int d)
{
    printf("value before increament:%d\n",d);
     return d+1;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int add(int a,int b)
{
    return a+b;
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   c=add(a,b);
   printf("%d\n",c);
    }
    
   

    return 0;
}
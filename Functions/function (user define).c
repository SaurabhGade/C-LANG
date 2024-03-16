//With argument value with return value.

#include<stdio.h>
int sum(int a , int b)
{
return a+b;
}

int main()
{
    int a,b,c;
    a=9;
    b=87;
    c=sum(a,b);
    printf("The some is %d\n",c);
    return 0;
}

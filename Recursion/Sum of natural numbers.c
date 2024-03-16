#include<stdio.h>
int naturalsum(int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
        return a+naturalsum(a-1);
    }   
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the how many naturals number some do you want\n");
    scanf("%d",&a);
    printf("The some of first %d natural number is %d\n",a,naturalsum(a));
       return 0;
}

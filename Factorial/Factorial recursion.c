#include<stdio.h>
int factorial (int a)
{
    if (a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number which you want factorial\n");
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}

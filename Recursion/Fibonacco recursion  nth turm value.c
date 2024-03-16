#include<stdio.h>
int fibonacci (int a)
{
    if (a==0 || a==1 )
    {
        return a;
    }
    else{
        return fibonacci (a-1) + fibonacci (a-2);
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the turms of the series which you want\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\t",fibonacci(i) );
    }
    
    return 0;
}


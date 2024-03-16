#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int num,sum,r;
    printf("Armstrong no in 1-500\n");
    for (int i = 1; i <= 500; i++)
    {
        num=i;
        sum=0;
        while (num!=0)
        {
            r=num%10;
            sum=sum+r*r*r;
            num=num/10;
        }
        if (sum==i)
        {
            printf("\t\t\t%d\n",i);
        }
        
        
    }
    
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int sum=0,arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        sum=arr[j]+sum;
    }
    printf("%d",sum);
    
    return 0;
}
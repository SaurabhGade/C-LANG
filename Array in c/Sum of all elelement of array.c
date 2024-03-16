#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int arr[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d Element of an array:\n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        sum=sum + arr[i];
    }
    printf("The sum of all elements of array is %d",sum);
    
    return 0;
}
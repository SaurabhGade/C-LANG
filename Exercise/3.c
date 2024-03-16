//. Write a program in C to read 10 numbers from keyboard and find their sum and average. 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a[10];
    int sum=0;
    printf("Enter the 10 numbers\n");
    for (int i = 0; i < 10; i++)
    { 
        printf("Enter no %d:\n",i);
        scanf("%d",&a[i]);
    }
    printf("You have enter no:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d\t",a[j]);
    }
    for (int k = 0; k < 10; k++)
    {
        sum=sum+a[k];
    }
    printf("\nThe sum of 10 no. which you enteren:%d\n",sum);

    
    
    
    
    return 0;
}
//Write a program in C to display n terms of natural number and their sum.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,series=0,sum=0;
    printf("Enter the Nth turm\n");
    scanf("%d",&a);
    do
    {
        
        printf("%d",series);
        sum=sum+series;
        series++;
    } while (series <=a);
    printf("\nThe sum of first %d naturatal is %d",a,sum);
    return 0;
}
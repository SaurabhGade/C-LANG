//Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter the index of multiplication table\n");
    scanf("%d",&a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d",a,i,a*i);
        printf("\n");
    }
    
    return 0;
}
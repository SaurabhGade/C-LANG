// Write a program in C to display the n terms of odd natural number and their sum .
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("Enter the nth number of odd numbers\n");
    int num, odd = 1;
    scanf("%d", &num);
    printf("%d first odd no are:\n",num);
    for (int i = 1; i <= num; i++)
    {
        odd = odd + 2;
        printf("%d\t", odd);
    }

    return 0;
}
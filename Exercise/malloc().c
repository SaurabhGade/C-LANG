//Write a program to dynamically an array of size of 6 and capable of storing of six numbers 0;
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    ptr=malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the no %d no\n",i);
        scanf("%d",&ptr[i]);

    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        
        printf("The number on %d index of ptr is %d",i,ptr[i]);
        printf("\n");
    }
free(ptr);
    return 0;
}

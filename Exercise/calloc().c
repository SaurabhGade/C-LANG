//create array which capable of storing 6 numbers uning calloc().
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int *arr;
    arr=(int*)(calloc(6,4));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter element of index %d:",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for (int j = 0; j < 6; j++)
    {
        printf("The number on the index %d is %d\n",j,arr[j]);
    }
    free(arr);
    
    return 0;
}
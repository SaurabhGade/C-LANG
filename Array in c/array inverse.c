#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    int arr[n];
    
    printf("Enter n\n");
    scanf("%d",&n);
    for (int i = 1 ; i <= n; i++)
    {
        printf("Enter the %d element of array\n",i);
        scanf("%d",&arr[i]);
    }
    printf ("The inverse of the array is :\n");
    for (int j = n; j > 0; j--)
    {
        printf("\t%d",arr[j]);
    }
    
    
    return 0;
}
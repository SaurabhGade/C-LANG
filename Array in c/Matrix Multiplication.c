#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a[3][3];
    printf("Enter the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}
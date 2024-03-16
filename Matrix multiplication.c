#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a[2][2],b[2][2];
    int c[2][2];
    printf("ENTER FIRST MATRIX\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            scanf(" %d",&a[i][j]);
        }
        
    }
    printf("The matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
              printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("ENTER SECOND MATRIX\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            scanf(" %d",&b[i][j]);
        }
        
    }
    printf("The matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
              printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
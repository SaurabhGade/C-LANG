//Addation of two matricx.
#include<stdio.h>
int main()
{
    int a[3][43],b[3][3],c[3][3],d[3][3];
        printf("Enter 9  numbers for first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
               scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter 9 values of second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d\n",&b[i][j]);
        }
        
    }
   /* printf("Enter 9 values of third mitrex\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d\n",&b[i][j]);
        } */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("%d",d[i][j]);
        }
        printf("\t");       printf("\n");
    }
    
    
    

    return 0;
}

#include<stdio.h>
void revarry(int a[])
{
     printf("After reversion\n");
    int value;
    for (int i = 0; i < 11/2 ; i++)
    {
        value=a[i];
        a[i]=a[10-i];
        a[10-i]=value;
     }
}
void printrarr(int a[])
{
    for (int  i = 0; i < 11 ; i++)
    {
        printf("The value of %d element of array is %d\n",i,a[i]);
    }
    
}
int main()
{
    printf("Enter the 11 values which going to reverse\n");
    int arr[10];    
    for (int i = 0; i < 11 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before reversing the array\n");
    printrarr(arr);
    revarry(arr);
    printf("\n After reversing the array\n");
    revarry(arr);
    
    
    return 0;
}

#include<stdio.h>
void ReverseArr (int s[])
{
    printf("The number you have entered is :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d",s[i]);
        printf("\n");
    }
    printf("The reverse of six number is:\n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d",s[i]);
        printf("\n");
    }
    
}
void Revarraywhile(int a[])
{
    int b=5;
    printf("Using while loop\n");
    while (b>=0)
    {
    
           printf("%d",a[b]);
           b=b-1;
           printf("\n");
    }
    
}

int main()
{
    int sum=0;
    int a[6];    
    printf("Enter the six number\n");
    for (int i = 0; i < 6 ; i++)
    {
        scanf("%d",&a[i]);
    }
    ReverseArr(a);
    Revarraywhile(a);
    return 0;
}


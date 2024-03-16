#include <stdio.h>
int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the numbr is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}
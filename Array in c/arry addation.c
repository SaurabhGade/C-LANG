#include<stdio.h>
int main()
{
    int sub[5],total=0;
    int i;
    printf("Enter the five value of addation\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&sub[i]);
        total=total+sub[i];
    }
    printf("Value you entred are \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",sub[i]);
    }
    
    printf("\nThe some is:\t%d",total);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x;
    x=(int *)malloc(2);
    printf("Enter the values\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&x[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("value a index%d is %d\n",i,*(&x[i]));
    }    
    free (x);
    
    return 0;
}
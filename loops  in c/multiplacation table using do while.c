#include<stdio.h>
int main()
{
    int num,index=1;
    printf("Enter the number of muiltiplaction table\n");
    scanf("%d",&num);
    
    do
    {
        printf("%d x %d = %d\n",num,index,num*index);
        index=index+1;
            } while (index<=10);
    
    return 0;
}

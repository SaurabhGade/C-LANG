#include<stdio.h>
int main()
{
    int i,index;
    printf("Enter the no of table\n");
    scanf("%d",&index);
    for ( i = 0; i <= index; i++)
    {
        printf("%d^3=%d\n",i,i*i*i);
        
        
    }
    
    
    return 0;
}

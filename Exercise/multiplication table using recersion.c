#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void table (int num , int i)
{
    printf("%d x %d = %d\n",num , i , num * i);
    if (i < 10)
    {
        return table(num , i+1);
    }
    
}
int main()
{
    int num,i=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The tabel of %d is :\n",num);
    table(num,i);
    return 0;
}
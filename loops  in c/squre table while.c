#include<stdio.h>
int main()
{
    int num=1,index;
    printf("last digit of squre table\n");
    scanf("%d",&index);

    while (num<=index)
    {
          printf("%d^%d=%d\n",num,num,num*num);
          num=num+1;
    }
    
    
       return 0;
}

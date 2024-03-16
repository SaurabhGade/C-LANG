#include<stdio.h>
int main()
{
    int i=0,num,next,fv=0,sv=1;
    printf("Enter the series renge\n");
    scanf("%d",&num);
    while (i <= num)
    {
           if (i<=1)
           {
               next=i;
           }
           else
           {
               next=fv+sv;
               fv=sv;
               sv=next;
           }
           printf("%d \t",next);
           i++;
    }
    
    return 0;
}

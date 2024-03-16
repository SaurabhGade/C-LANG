#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,f=0,s=1,next;
    printf("Enter the terms of a series: \n");
    scanf("%d",&num);
    for (int i =0 ; i < num; i++)
    {
        if (i<=1)
        {
              next=i;
        }
            else
        
        {
            next=f+s;
            f=s;
            s=next;
        }
        printf("%d\t",next);
    }
    return 0;
}
   
    
    

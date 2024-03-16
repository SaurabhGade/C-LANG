#include<stdio.h>
int main(int argc, char const *argv[])
{
    int next,f=1,num,s=0,t=2;
    int i;
    printf("Enter the term of odd no series\n");
    scanf("%d",&num);
    
        for (int i = 0; i <= num; i++)
        {
             if (i<=1)
             {
                 next=i;
             }
             else
             {
                 next=t+f;
                 f=next;
                 next=f+2;
             }
             
        }printf("%d\t",next);
        
    return 0;
}
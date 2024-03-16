#include<stdio.h>
int rfibonacci(int a)
{
    if (a==2 || a==1)
    {
        return a-1;
    }
    else
    {
        return rfibonacci(a-1)+rfibonacci(a-2);
    }
}
int ifibonacci(int a)
{
    int f=0,next;
    int s=1;
    for (int  i = 0; i < a; i++)
    {
        next=f+s;
        f=s;
        s=next;
    }  
        
    return next;
}
int main()
{
    int iturm,rturm,n;
    printf("Enter the nth turm of the series\n");
    scanf("%d",&n);
    rturm=rfibonacci(n);
    iturm=rfibonacci(n);
    printf("Recursion\t%d:",rturm);
    printf("\nItretive\t%d",iturm);
    return 0;
}

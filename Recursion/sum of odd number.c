#include<stdio.h>
int sumodd(int a)
{
    int even;
    even = a%2;
    if (a==1)
    {
        return 1;
    }
    else if (a==even)
    {
        return sumodd(a-1)+sumodd(10-3);
    }
    else
    {
        return a+sumodd(a-1);
    }
    
    
    
    
}
int main()
{
    int a,num,odd,even;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num % 2)
    {
        
    }
    
    printf("Sume of first %d odd no is :%d\n",num,a);
    return 0;
}

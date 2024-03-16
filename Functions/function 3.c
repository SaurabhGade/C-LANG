//Without argument with return value.

#include<stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int a;
    a=takenumber();
    printf("The number enered is :%d\n",a);
    return 0;
}

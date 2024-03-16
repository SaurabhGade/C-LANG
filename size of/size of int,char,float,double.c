#include<stdio.h>
void size ()
{
    int a;
    a=sizeof(int);
    printf("The size of int is :%d\n",a);
    a=sizeof(char);
    printf("The size of char is %u\n",a);
    a=sizeof(float);
    printf("The size of float is :%u\n",a);
    a=sizeof(double);
    printf("The size of double is %u",a);
}
int main()
{
    size();
    
    return 0;
}
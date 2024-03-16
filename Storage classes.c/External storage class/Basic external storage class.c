#include<stdio.h>
int sum;     //Default value is 0;
//Globle veriable also called as external veriable.
int myfunc (int a, int b)
{
    sum=a+b;
    return sum;
}
int main()
{
    myfunc(4,6);
    printf("Sum stored in globle veriable sum s is %d\n",sum);
   return 0;
}
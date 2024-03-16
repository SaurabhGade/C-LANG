#include<stdio.h>
int myfunc (int a, int b)
{
    static int myvar;  //Static veriable default initial value is 0;
    printf("The myvar is %d\n",myvar);

    myvar++;    //Here we increament the static veriables value with every function call.
    return myvar;
}
int main()
{
    int myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    return 0;
}
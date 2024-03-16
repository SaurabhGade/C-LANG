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
   register int myvar=myfunc(3,5);  //Here we request COMPILER class to save veriable 
  // in CPU RIGISTAR Insted of MEMORY....SO CPU CAN EASALY COMMUNICATE WITH VERIBALY EASALY 
  // THIS CLASS IS USED TO RUM PROGRAM FASTER.
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    return 0;
}
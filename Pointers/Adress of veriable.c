

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=43;
    int* j=&x;    //Pointer is a specil veriable we only can store address of a variable . we cant assign any valu to pointer.
    printf("Value of x is %d\n",x);      //%d renge is -32768 to 32768. 
    printf("Address of x is %u\n",&x);   //%u renge is 0 to 65535.  %u is better for print address.
    printf("The value of x using refersing and derefersing x is  %d\n",*&x);
    printf("The value of x using derefrsing j is %d\n",*j);
    printf("The address of pointer j is %u\n",&j);
    printf("The address of j usning derefresing and refrencing j is %u\n",*&j);
   return 0;
}

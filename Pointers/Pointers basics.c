//Pointer is a vareable which stores the address of another veriable.
#include<stdio.h>
int main()
{
    int a=76; 
    int* ptr=&a;
    printf("The address of s is %p\n",&a);     //Here we print address of veriable a.
    printf("The address of pointer to a is %d\n",&ptr);  //Here we print a address of veriable ptea.
    printf("The address of a is %p\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %d\n",a);

}

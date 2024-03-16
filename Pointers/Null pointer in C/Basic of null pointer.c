#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=33;
    int *ptr=NULL;
    ptr=&a;
    printf("the address of a is %d\n",&a);
    //printf("The address of a is %d\n",*ptr); If we directly dereference the null pointer the progrm will crush 
    //because NULL pointer does not contain any address.
    if (ptr != NULL)    //So here we use error handling if ptr is not NULL POINTER then if conditon is true then code will compile.
    {
    printf("The value of a is %d\n",*ptr);
    }
    else
    {
        printf("The POINTER is a NULL pointer and cannot be derefrenced");
    }
    

    return 0;
}
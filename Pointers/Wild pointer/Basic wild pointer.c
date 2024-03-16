#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=343;
    int *ptr; //This is a wild pointer.
   // *ptr=44;//This is not a good thing to do.
    ptr=&a; //ptr is no lonager wild pointer anymore.
    printf("The value of a is %d\n",*(ptr);
    return 0;
}
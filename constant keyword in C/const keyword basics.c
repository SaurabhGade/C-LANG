#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    const int x = 4;
    const int * p;
    p=&x;
    printf("x=%d\n",x);
   // ++(*p); //this will not work in visual studio code.
   // But it works in the other c compiler like turbo c and code blodk.
    printf("x=%d\n",x);
    return 0;
}
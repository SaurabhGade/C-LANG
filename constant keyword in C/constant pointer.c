#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    const int x=5;
    int * const ptr; //this is declaration of constant pointer.
    //we call this constant pointer.
    int const * p = &x; //this line known as constant to pointer.
    const int * pz; //this also know as constant to pointer.
    //++(*p); //This line work in code block but
    //but in the visual studio it throws error.
    printf("%d",x);
    return 0;
}   
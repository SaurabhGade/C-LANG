#include<stdio.h>
int main(int argc, char const *argv[])
{
    //int* a,b;  Here we comment out int* a,b; because it makes a as a pointer and b is normal intiger veriable.
    typedef int* intptr;  //Here we change name of int* to intptr 
    intptr a,b;           //So now we can make so many pointer variable at a time.
    int c;
    c=&a;        //So these both statement are valid and will not throw any error.
    b=&b;        // And here we can't store normal value like value of c,ie. c=b; or c=a; 

    return 0;
}

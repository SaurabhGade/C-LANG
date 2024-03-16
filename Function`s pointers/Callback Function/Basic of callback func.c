#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int a, int b) // Here we declair function which type is with argument with ruturn value. which take two number's as argument and return sum of two number.
{
    return a + b;
}
void greetHell(int (*fptr)(int, int)) // Here we createtd andther function of take somthing and return nothing . //and this function takes argument as pointer wich take pointer which takes two argument and return nothing.
{
    printf("Hello User\n");
    printf("The sum of 3 and 9 is %d\n", fptr(3, 9));
}
void greetGm(int (*fptr)(int, int)) // Here we createtd andther function of take somthing and return nothing . //and this function takes argument as pointer wich take pointer which takes two argument and return nothing.
// when we call this function control will come in the function and printf "Good Morning" and when control goes on the
// fptr then control will return to main() and then and chack what's ptr hold and then control goes on sum function and and hold 
{
    printf("Good Morning\n");
    printf("The sum of 3 and 9 is %d\n", fptr(3, 9));  //Here we giving argument to the function pointer . and also print the return value.
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum; 
    greetHell(ptr);
    greetGm(ptr);
    return 0;
}
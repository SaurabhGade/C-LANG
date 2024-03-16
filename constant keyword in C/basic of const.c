#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    const float pi=3.14;
    const int x; //these will make garbage value constant and veriable is not useful .
    //always avoid uninitilized constant veriable.
    printf("%d\n",pi);
    printf("%f\n",x);
    return 0;
}
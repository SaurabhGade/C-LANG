#include<stdio.h>
int d=4;
void globle ()
{
          printf("\ngloble veriable is d: %d\n",d);
}
int main(int argc, char const *argv[])
{
    int s=53;
    printf("\nlocal vereiable is s: %d\n",s);
    globle();
    return 0;
}

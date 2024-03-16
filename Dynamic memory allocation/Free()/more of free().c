#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void func()
{
    int x;
    int *p;
    p=(int *)malloc(4); //Veriable which memory allocated using DML,Then after using veriable memory shall not eareased.
    //We need to free memory ourselfe.for releasing memory we can use frre().
    //Free function can only free memory wich created using DMA . free function can't realse memory of SMA(static memory allocation).
    *p=5+6;
    printf("%d",*p);
    free(p);//Memory cleard which created using DML.
    //so pointer p will not earesed because which memory is allocated using SMA.
}
int main()
{
    func();
    return 0;
}
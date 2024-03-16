//IMPORTANT**
//There two type of memory allocation.
//SMA: Static memory allocation.
//DMA: Daynamic memory allocation.
//In DMA there is typecasting is important because it return voide pointer and we need to typecast in riqure datatype.
// CALLOC(),MALLOC(),RELLOC(), AND FREE() ARE ACTION STATEMENT IN DMA.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    ptr=(int *)malloc(4); //so here we allocated 4 byte memory in runtime to ptr
    *ptr=939;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d",*ptr);

    return 0;
}
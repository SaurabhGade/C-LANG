#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int * ptr = NULL;
    ptr = (int *)calloc(sizeof(int) , 100);  //Calloc function takes two argument.
                                     //1. size of element like int = 4 , float 8 , char = 2; or sizeof(data_type);
                                     //2 . No of the blocks , like how many block of int you want .
    for (int i = 1; i <= 100; i++)
    {
        *ptr = i*10;
        ptr++;
    }
    ptr-=100;
    for (int i = 1; i < 101; i++)
    {
        printf("%d",*ptr);printf("\t%d",i);
        ptr++;
        printf("\n");
    }
    free(ptr);   //For avoiding the memory leak.
    return 0;
}
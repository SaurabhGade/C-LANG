//Also called a jump statement
//Used to transfer program control to pridifine lable i.e. lable: 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    lable:
    printf("we are inside lable \n");
    goto end;
    printf("Hellow World\n");
    goto lable;
    end:
    printf("we are at end\n");
    return 0;
}

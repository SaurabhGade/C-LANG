#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    if(createProcess() || fork()){
        fork();
    }

    printf("1");
    return 0;
}
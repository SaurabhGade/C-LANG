#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int available = 1;
void acquire(){
    while(available == 0);
    available = 0;
}
void realese(){
    available = 1;
}
void mutexLock(){
    acquire();
    printf("In the criticle section");
    printf("\nWork done\n");
    printf("\nresource released\n");
    realese();
}
int main()
{
    mutexLock();
    return 0;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hellow World\n=");
    int i=0,j=0;
    for ( i < 5,j<7  ; i++;j++)
    {
        printf("%d %d\n",j,i);
    }
    return 0;
}

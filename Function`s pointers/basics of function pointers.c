#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int odd (int a)
{
    if (a % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
     
}
int main(int argc, char const *argv[])
{
    int n;
    printf("entrer the number\n");
    fflush(stdin);         //Use these function to clearing privius keybord output so scanf can work proparly .
    //it work without it somtimes previous output stuck in the clipbord and scanf or gets() issue to run properly so it better to use fflush(stdin).
    scanf("%d",&n);
    int (*ptr) ( int );  //Declaring a function pointer . 
    ptr=&odd;         //creating a function pointer .
    int d=(*ptr)(n);  //Derefrencing a function pointer .
    if (d==1)
    {
        printf("odd");
    }
    else
    printf("even");
    
    return 0;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c=(int)argv[1] + (int)argv[2];
    if (argc <= 2)
    {
        printf("NEED TWO ARGUMENT'S FOR THE ADDITION");
    }
    else
    {
printf("The addition of command line argument is %d\n",c);
    }
   
    
    return 0;
}

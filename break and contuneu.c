//User enter his name & keeps playing until game over.
// break statement can be used with 1:Loops and switch.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hellow World");
    int i,age;
    for (i = 0; i < 10; i++)
    {
printf("%d\n Enter your age\n ",i);
scanf("%d",&age);
if (age >10)
{
    break;
}

    }
    
    
    return 0;
}

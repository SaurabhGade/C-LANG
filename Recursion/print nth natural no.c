#include<stdio.h>
int natural (int a)
{
    int v;
    if (a==1)
    {
        printf("%d",1 );
    }
    else
    {
         v=a+natural(a-1);
         printf("%d\t",v);
    }
    
    
}
int main(int argc, char const *argv[])
{

    int num;
    printf("How many natural no do you want\n");
    scanf("%d",&num);
    natural(num);
    printf("\t");
    

    return 0;
}

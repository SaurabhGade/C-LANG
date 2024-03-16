#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int s;
    printf("Enter the number\n");
    scanf("%d",&s);
    int a=0,sum=0;
   do
   {
       sum=sum+a;
       a++;
   } while (a<=s);
   printf("%d",sum);
    
    return 0;
}
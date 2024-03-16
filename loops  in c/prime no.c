#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    int isPrime=1;   //Initaily we suppose num is prime!
    printf("Enter the number\n");
    scanf("%d",&n); 
    for (int i = 2; i*i <= n; i++)
    {
           if (n % i == 0)
           {
               isPrime=0; //if the mudule of number come's 0 then num is composite.
               //And value of variable isPrime become 
               goto strar;
           }
    }
    strar:
    if (isPrime == 1)
    {
    printf("%d is prime",n);
    }
    else 
    {
    printf("%d is compsite",n);    
    }
    return 0;
}
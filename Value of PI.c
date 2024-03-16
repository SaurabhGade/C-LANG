#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<pthread.h>
void* PIval(){
     long a = 22;
    long  i = 7;
    long i2 = i;
    int div = 0;
    long turn = 0;
    int temp;
    while (1)
    {
        temp = 0;
        while (i <= a)
        {
            temp = i;
            div++;
            i +=7;
        }
        
        if( a  - temp == 0){
            printf("%d",div);
            break;
        }
        a -= temp;
        a *= 10;
        if (turn == 0)
        {
            printf("%d", div);
            printf(".");
        }
        else
        {
            printf("%d", div);
        }
      if(turn == 100){
        a = 7*5;
    }
        i = i2;
        div = 0;
        turn++;
    }
  
}
int main()
{
    PIval();
    return 0;
}
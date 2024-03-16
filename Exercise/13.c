/* Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
   1 
  2 3 
 4 5 6 
7 8 9 10 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int num,k=0;
    printf("Enter the no of the roew\n");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("/t%d\t",k++);
        }
        printf("\n");
    }
    

    return 0;
}
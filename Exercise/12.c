/*Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int num,k=1;
    printf("Enter the no of the row do you want\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t",k++);
        }
        printf("\n");
    }
    
    return 0;
}
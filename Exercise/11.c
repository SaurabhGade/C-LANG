/* Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. Go to the editor

The pattern like :

 1
 22
 333
 4444
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int row;
    printf("Enter the no of the rowa:\n");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    
    

    return 0;
}
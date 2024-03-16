/*Write a program in C to display the pattern like right angle triangle using an asterisk. Go to the editor

The pattern like :

*
**
***
****           */
#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    printf("Enter the rowa of star pattern\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
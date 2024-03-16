/*Write a program in C to display the pattern like right angle triangle with a number.
The pattern like :

1
12
123
1234
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter the no of the roe :\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    

    return 0;
}
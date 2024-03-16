/*Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

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
    printf("Enter the no of the row's:");
    scanf("%d",&a);printf("\n");
    for (int i = 1; i <= a; i++)
    {
        printf("1");
        for (int j = 2; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>
void printstar(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void reversestarpatern(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, star;
    printf("How many rows do you want in star pattern \n");
    scanf(" %d", &rows);
start:
    printf("Enter 0 for star patern and enter 1 for reverse star patern\n");
    scanf("%d", &star);
    switch (star)
    {
    case 0:
        printstar(rows);
        break;
    case 1:
        reversestarpatern(rows);
        break;
    default:
        printf("You have choosen an invalid star patern\n Rechoose star patern 0 OR 1\n");
        goto start;
    }
}
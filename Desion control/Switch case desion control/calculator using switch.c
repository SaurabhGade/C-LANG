#include <stdio.h>
int main(int argc, char const *argv[])
{
    char o;
    int num1, num2;
    printf("Welcome to simple calculator by saurabh gade\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("choose the operation you want to do(+,-,*,/,%\n");
    scanf("%c", &o);
    printf("Enter number 1:\n Enter number 2:\n");
    scanf("%d%d", &num1, &num2);

    switch (o)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("%d mod %d = %d", num1, num2, num1 % num2);
        break;
    default:
        printf("please choose the right operation\n");
        break;
    }
    return 0;
}

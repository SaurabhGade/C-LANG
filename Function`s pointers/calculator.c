#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cal(int a, int b)
{
    char op;
    printf("Enter the operator\n");
    start:
    fflush(stdin);
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    default:
        printf("pls enter the  valid operator\n");
        goto start;
        break;
    
    }
}
int main()
{

    int (*ptr)(int, int);
    int a, b;
    printf("Enter number 1 \n");
    scanf("%d", &a);
    printf("Enter the second no \n");
    scanf("%d", &b);
    ptr = &cal;
    int d = (*ptr)(a , b);
    printf("%d", d);
    return 0;
}
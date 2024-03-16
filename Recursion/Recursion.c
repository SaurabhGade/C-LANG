#include <stdio.h>
int factorialrec(int r)      //User define function. with argument and with return value
{
    if (r == 1 || r == 0)
    {
        return 1;
    }
    else
    {
        return r * factorialrec(r - 1);    //recursion reletionship and here function r call itself.
    }
}
int factorialitr(int f)       // User define function . With argument and with return value.
{
    int number = 1;
    if (f == 1 || f == 0)
    {
        return 1;
    }
    else
    {
        for (int i = f; i > 1; i--)
        {
            number = number * i;
        }
        return number;
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number which you want factoril of \n");
    scanf("%d", &num);
    printf("The factoral of %d is %d\n", num, factorialrec(num));  //using rection
    printf("the factorial of %d is %d\n", num, factorialitr(num)); // using itretive method
    return 0;
}

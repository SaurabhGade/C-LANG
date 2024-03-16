#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num, i, fact = 1;
    printf("Enere tne number of factorial:");
    scanf("%d", &num);
    if (num == 1 || num == 0)
    {
        fact = 1;
    }
    else if (num < 0)
    {
        goto end;
    }

    else
        for (i = num; i >= 1; i--)
        {
            fact = fact * i;
        }
    printf("%d!=%d\n", num, fact);

end:
printf ("invalid number");
    return 0;
}

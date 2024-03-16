#include <stdio.h>
int main()
{
    int age, cage;
    printf("enter your age:\n");
    scanf("%d", &age);
    printf("confarm your age:\n");
    scanf("%d", &cage);

    if (age != cage)
    {
        printf("age is not match \n");
    }

    if (cage >= 18)
    {
        printf("you can vote");
    }

    if (cage < 18)
    {

        printf("you can not vote");
    }

    return 0;
}

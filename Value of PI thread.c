#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *PIval()
{
    long a = 22;
    long i = 7;
    long i2 = i;
    int div = 0;
    long turn = 0;
    int temp;
    while (1)
    {
        temp = 0;
        while (i <= a)
        {
            temp = i;
            div++;
            i += 7;
        }
        sleep(22/7);
        if (a - temp == 0)
        {
            printf("%d", div);
            break;
        }
        a -= temp;
        a *= 10;
        if (turn == 0)
        {
            printf("%d", div);
            printf(".");
        }
        else
        {
            printf("%d", div);
        }

        i = i2;
        div = 0;
        turn++;
    }
}
void *wait_for_sec()
{
}
int main()
{
    pthread_t a, b;
    pthread_create(&a, NULL, &PIval, NULL);
    pthread_create(&b, NULL, &wait_for_sec, NULL);
    pthread_join(a, NULL);
    pthread_join(b, NULL);

    return 0;
}
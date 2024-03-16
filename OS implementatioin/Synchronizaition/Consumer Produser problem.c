#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#define n 100
int k = 0;
int j = 0;
int buffer[n]; // size of the buffer is n == 100;
int full = 0;  // Indicate the occupied block in buffer. Initially number of occupied block's in buffer are zero.
int empty = n; // Indicate the Free blocks in buffer , Initially hole buffer is empty;
int mutex = 1;
void wait_(int s)
{
    while (s <= 0)
        ;
    s--;
}
void signal_(int s)
{
    s++;
}
void *producer()
{
    while (1)
    {
        wait_(empty);
        wait_(mutex);
        buffer[k] = rand();
        k = k + 1 % n;
        signal_(mutex);
        signal_(full);
    }
}
void *consumer()
{
    while (1)
    {
        wait_(full);
        wait_(mutex);
        printf("%d ", buffer[j]);
        j = j + 1 % n;
        signal_(mutex);
        signal_(empty);
    }
}
int main()
{
    pthread_t p1, p2;
    pthread_create(&p1, NULL, &consumer, NULL);
    pthread_create(&p2, NULL, &producer, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);

    return 0;
}
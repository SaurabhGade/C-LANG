#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
void *runner()
{
    printf("In the user thread runner\n");
    sleep(2);
    printf("Back in runner thread ....\n");
    printf("work done\n");
}
void *nextRun()
{
    printf("runner thread is working for on background task seconds\n");
    printf("Executing nextRun thread");
    char c = 'a';
    printf("Work is on...\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", c);
        c++;
    }
    printf("done returning to \" Weaking up runner THREAD \" \n");
    signal(1, &runner);
}
int main()
{
    pthread_t t1, t2;
    pthread_create(&t1 , NULL , &runner , NULL);
    pthread_create(&t2 , NULL , &nextRun , NULL);
    pthread_join(t1 , NULL);
    pthread_join(t2 ,NULL);
    return 0;
}
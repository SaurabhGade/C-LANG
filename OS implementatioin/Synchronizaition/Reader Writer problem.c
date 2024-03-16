#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int read_count = 0; //To count number of readers.
int rwmutex = 1;   //binary semaphore for Mutual exclusion for thos who want to write
int mutex= 1;   //to ensure mutual exclusion for riters.
void reader()
{
    do
    {
        wait(mutex);
        read_count++;
            if(read_count == 1){
                wait(rwmutex);
            }
        signal(mutex);
            printf("In the critical section");
        wait(mutex);
        read_count--;
        if(read_count == 0){
            signal(rwmutex);
        }
        signal(mutex);
    } while (1);
}
void writer(){
    do
    {
        wait(rwmutex);
        printf("Writing in critical section");
        printf("Writing is complate");
        signal(rwmutex);
    } while (1);
    
}
int main()
{

    return 0;
}
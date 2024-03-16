#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
void *runtime(){
    printf("\nIn the user thread\n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ", i);
    }
    printf("\n");
    sleep(3);
    printf("\nEnding thread\n");
}
int main()
{
    pthread_t a , b;
    pthread_create(&a , NULL , &runtime , NULL);
    pthread_create(&b , NULL , &runtime , NULL);
    pthread_join(a , NULL);
    pthread_join(b, NULL);
    return 0;
}
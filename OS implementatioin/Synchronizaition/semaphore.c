#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list{
    int data;
    struct list * ptr;
};
typedef struct 
{
    int s;
    struct list * PCB; 
} semephore;
 void wait(semephore * s){
    s->s--;
    if(s->s < 0){
        while(1){
            printf("some process may be in cs\n");
        }

    }
    printf("critical section accessed");
}
void signal(semephore * s){
    s->s++;
    if(s->s <= 0){
        printf("Process removed form blocked state");
    }
}
int main()
{
    semephore * s = (semephore *)malloc(sizeof(semephore));
    s->s = 1;
    wait(s);
    signal(s);
    return 0;
}
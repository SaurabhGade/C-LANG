#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef
struct linklist
{
    int data;
    struct linklist * ptr;
} list ;
list * head = NULL;
void push(int val){
    list * t, *temp;
    t = (list*)malloc(sizeof(list));
    t->data = val;
    t->ptr = NULL;
    if(head == NULL){
        head = t;
    }
    else{
        t  = head;
        while(t->ptr != NULL){
            t = t->ptr;
        }
        t->ptr = temp;
    }
}
void print(){
    if(head == NULL){
        printf("Linked list is empty");
        return;
    }
    list * t = head;
    while(t != NULL){
        printf("%d ", t->data);
        t = t->ptr;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    print();
    return 0;
}
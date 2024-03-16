#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct LinkedList
{
    int data;
    struct LinkedList *ptr;
};
struct LinkedList *makeNode()
{
    struct LinkedList *node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    node->ptr = NULL;
    return node;
}
int addElement(int element, struct LinkedList *head)
{
    head->data = element;
    head->ptr = makeNode();
    return head->data;
}
int main()
{
    struct LinkedList *head = makeNode();
    printf("Enter how many element you want to be in Linked list\n");
    int n;
    scanf("%d", &n);
    struct LinkedList *dupHead = head;
    for (int i = 0; i < n; i++)
    {
        int temp;
        printf("Enter the %d element\n", i + 1);
        scanf("%d", &temp);
        dupHead->data = temp;
        dupHead->ptr = makeNode();
        dupHead = dupHead->ptr;
    }
    dupHead = head;
    while(dupHead->ptr != NULL){
        printf("%d ",dupHead->data);
        dupHead = dupHead->ptr;
    }
    return 0;
}

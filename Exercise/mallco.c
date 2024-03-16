#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a = 33;
    int * ptr = NULL;
    ptr = (int * )malloc(5 * sizeof(int));
    int k= sizeof(ptr);
    printf("The size of ptr is :");
    printf("%d",k);
    printf("\n");
    int * start = ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d Element :" , i);
        scanf("%d",ptr);
        ptr++;
    }
    printf("\n");
    printf("The size of the ptr is :");
    printf("\n %d" , sizeof(ptr));
    ptr = ptr - 5;
    for (int i = 0; i < 5; i++)
    {
        printf("value at index %d :",i);
        printf("%d",*ptr);
        ptr++;
        printf("\n");
    }
    free(ptr);
    printf("The size of the ptr is %d:",sizeof(ptr));
    printf("%d",sizeof(ptr));
    
    
    return 0;
}
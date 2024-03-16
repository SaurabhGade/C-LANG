#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display(int * arr){
    for (int i = 0; i < 10; i++)
    {
        printf("%d",*arr);
        arr++;
    }
    
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=i;

    }
    display(arr);
    return 0;
}
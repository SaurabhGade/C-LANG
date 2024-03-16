#include<stdio.h>
int main()
{
    int arr[5];
    int *p=&arr[0];       //We pass of base address of array in pointer.
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",p+i);  //And here we adding i int memory size in base address which stored in p.
        //i.e. if base address is 1000 then first itretion i value become 0 and base address remain same value form keybord stores in base address
        // in second itretion i value become 1 and int value 4 add in base address ,so second address is become 1004 wheres second element of array will stores.
           }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",*(p+i));
        printf("\n");
    }
    

    
    return 0;
}

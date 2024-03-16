#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int arr[4],no;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d no:",i);
        scanf("%d",&arr[i]);
    }
    no=arr[0];
    for (int j = 0; j < 5 ; j++)
    {
        if (no < arr[j])
        {
            no=arr[j];
        }
        
    }
      printf("The biggest no is %d",no);
    
    return 0;
}
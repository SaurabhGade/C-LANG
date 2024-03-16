/*
use 
gcc filename ; size .\a.exe to find out size of prgem using.
*/
#include<stdio.h>
#include<stdlib.h>  //Dynamic memory allocation comes in the #include<stdlib.h>.
int main()
{
           //USE OF MALLOC.
        int *ptr;
        int n;
        printf("Enter the size of the array you want to create\n");
        scanf("%d",&n);
        ptr=(int *) malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("Enter the value no %d of this array\n",i);
            scanf("%d",&ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("The value at %d of this array is %d \n",i,ptr[i]);

        }
        free(ptr);      //To free the memory which realloc used.
        
        
    
    return 0;
}
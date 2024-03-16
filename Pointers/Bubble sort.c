#include<stdio.h>
void sort (int *arr , int a)
{
    int round,temp;
    for (int round = 1; round <= a-1; round++)
    {
        for (int i = 0; i <= a-1-round ; i++)
        {
            if (*(arr+i) > *(arr + i + 1) );
            {
                temp=*(arr + i);
                *(arr+i)=*(arr+i+1);www
                *(arr+i+1)=temp;
            }
            
        }
        
    }
    
}
int main()
{
    int a=10;
    int arr[10];
    printf("Enter the 10 values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
     sort(arr,a);
     printf("after sort\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d",arr[j]);
        printf("\n");
    }
    

    return 0;
}

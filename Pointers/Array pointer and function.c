#include<stdio.h>
void input (int *ptr)
{
      for (int i = 0; i < 5; i++)
      {
          scanf("%d",ptr+i); //So here we access base address of arry.
          //And we put values in the address of arr because *ptr holds address of arr.   
      }   
}
void swap (int *ptr)
{
    int round ,t;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(ptr+i) > *(ptr+i+1))
            {
               t=*(ptr+i);
                *(ptr+i)=*(ptr+i+1);
                *(ptr+i+1)=t;
            }
            
        }
        
    }
    
}
void output (int *s)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(s+i));
    }
    
}
 int main()
{
    int arr[5];
    input(arr); //We puting only arr because its giving base address of arr to the function .
    output(arr);
    swap(arr);
    output(arr);
    return 0;
}

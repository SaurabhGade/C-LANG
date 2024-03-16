// Write a program in C to display the cube of the number upto given an integer.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a, index = 0, ce;
    printf("Enter the index\n");
    scanf("%d",&a);
    do
    {
      printf("The cube of %d = %d\n",index,index*index*index);
      index++;
    } while (index <= a);

    return 0;
}
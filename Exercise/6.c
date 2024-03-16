//Write a program in C to display the multiplication table vertically from 1 to n. Go to the editor
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,table=0;
    printf("Enter the number how many multiplication table do you want\n");
    scanf("%d",&a);
    for (int i = 1; i < a; i++)
    {
        printf("Table of %d:\n",i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%dx%d=%d",i,j,i*j);
            printf("\t");
        }
        printf("\n");
     }
    
    return 0;
}
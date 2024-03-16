#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int price[2];
    char name[2];
    int pages[2];
    printf("Enter the price ,pages and name of 3 books\n");
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d%c",&price[i],&pages[i],&name[i]);
        
    }

    for (int j = 0; j < 3; j++)
    {
            printf("%d\n%d\n%c\n",price[j],pages[j],name[j]);
            
    }
    
    

    return 0;
}
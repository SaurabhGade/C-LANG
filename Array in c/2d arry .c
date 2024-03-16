#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
          scanf("%d",&marks[i]);
    }
    int mark[4];
    for (int j = 0; j < 4; j++)
    {
        scanf("%d",&mark[j]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n%d    ",marks[i],mark[j]);
        }
        
    }printf("\n");
    
    
    
    return 0;
}

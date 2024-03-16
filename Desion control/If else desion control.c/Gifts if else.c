#include<stdio.h>
int main()
{
    int sub;
     printf("Enter the subject in which you passed ");
     printf("\n1:for Math and science both\n 2:Math\n 3:science\n");
     scanf("%d",&sub);
     if (sub==1)
     {
         printf("Congratulations you won 45RS!\n");
     }
     else if (sub==2)
     {
         printf("Congratulations you won 15RS!\n");
     }
     if (sub==3)
     {
        printf("Congratulations you won 15RS!\n");
     }
     
     else
     {
       printf("You have enter invalide subject!\n");
     }

     
         return 0;
}

#include <stdio.h>
int main()
{

    int g;
    int yos, qual, realsal, sal = 15000,sala=10000,salb=7000,salc=12000,sald=9000,sale=6000;
    printf("Enter the year of serves \n");
    scanf("%d", &yos);

    printf("Qulification (0=G,1=PG)\n");
    scanf("%d",&qual);

    printf(" Gender(M = 1 or F = 0):\n");
    scanf("%d" ,&g);

    if (g == '1' && yos >= 10 && qual == 1)

        realsal = sal;

    else if (g == '1' && yos >= 10 && qual == 0)

        realsal = sala;

    else if (g == '1' && yos < 10 && qual == 1)
        realsal = sala;

    else if (g == '1' && yos < 10 && qual == 0)

       realsal = salb;
    else if (g == '0' && yos >= 10 && qual == 1)

        realsal = salc;
    else if (g == '0' && yos >= 10 && qual == 0)

        realsal = sale+2000;

    else if (g == '0' && yos < 10 && qual == 1)

       realsal = sala;

    else if (g == '0' && yos < 10 && qual == 0)

        realsal = sale;
    else
      
        printf("Your salary is :%d",realsal);

   return 0;
}
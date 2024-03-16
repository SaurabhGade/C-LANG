#include<stdio.h>
int main()
{
     int Marathi,English,Math,Physics,cps,aggration;
     float percentage;
     printf("Enter the mark of Marathi\n English\n Math\n Physics\n cps\n");
     scanf("%d%d%d%d%d",&Marathi,&English,&Math,&Physics,&cps);

aggration=Marathi+English+Math+Physics+cps;
percentage=aggration/5;

printf("Aggration mark is:%d",aggration);
printf("\nprecentage is:%f",percentage);


}
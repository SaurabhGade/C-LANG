#include<stdio.h>
int main()
{
float cp,sp,p,l;
printf("ener the the cost price:\n");
scanf("%f",&cp);
printf("enter the selling prece :\n");
scanf("%f",&sp);
l=cp-sp;
p=sp-cp;
if (p>l)
printf("the saller made a profit of rs %f\n",p);
if (p<l)
printf("the saller made a loss of rs %f\n",l);
if (p==l)
printf("thares no profite no loss\n");

return 0;


    



}
#include<stdio.h>
int main()
{
int qty, dis;
float rate,total;
printf("enter quanty\n");
scanf("%d",&qty);
printf("enter rate\n");
scanf("%f",&rate);
if (qty>1000)
{
    dis=10;
}
else
dis=0;

total=(qty*rate)-(qty*rate*dis/100);
printf("total purchese is of rs:%f\n",total);
return 0;
}
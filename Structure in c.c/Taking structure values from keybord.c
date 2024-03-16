#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
    int d,m,y;
}today , tomorrow;

int main()
{
    printf ("Enter the  date of today AS DD/MM/YY\n");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y); //Now user also need to use slash . because we use slash between %d.
    printf("%d/%d/%d\n",today.d,today.m,today.y);
    tomorrow.d=today.d+1;
    tomorrow.m=today.m;
    tomorrow.y=today.y;
    printf("TOMORROW will be\n%d/%d/%d\n",tomorrow.d,tomorrow.m,tomorrow.y);//Here we printed the valure.
    return 0;
}
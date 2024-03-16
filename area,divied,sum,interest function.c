#include<stdio.h>
#define pi 3.13
void area ()
{
    int r;
    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    printf ("area of circle is %f\n",pi*r);
}
void interest (int p , int r , int t)
{
       int interest=(p*r*t)/100;
       printf("The interest on %d is %d\n",p,interest);

}
void factorial ()
{
    int v,fact=1;
    printf("Enter the number which do you want factorial\n");
    scanf("%d",&v);
       if (v==1 || v==0)
       {
           fact=1;
       }
       else
       {

           for (int i = v; i >= 1; v--)
           {
               fact=fact*i;
           }
           printf("%d!",fact);
           
       }

}
int main()
{
    int x,y,z;
    area();
    printf("enter price\n rate \n and time \n");
    scanf("%d%d%d",&x,&y,&z);
    interest(x,y,z);
    factorial();
   
    
    return 0;
}

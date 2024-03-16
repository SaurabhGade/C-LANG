#include<stdio.h>
int main()
{
int da,hra;
float bs;
printf("enter your basic salary \n");
scanf("%f",&bs);
if (bs<1500)
{
    hra=(bs*10)/100;
    da=(bs*90)/100;
    bs=hra+bs+da;

}
else
hra=500;
da=(bs*98)/100;
bs=(bs+hra+da);  
  printf("net salary is:%f\n",bs);


return 0;


}
#include<stdio.h>
int main()
{

int raam,sham,ajay;
printf("Enter the age of raam,\n");
scanf("%d",&raam);
printf("Enter the age of sham\n");
scanf("%d",&sham);
printf("Enter the age of ajay\n");
scanf("%d",ajay);


 if (raam<sham<ajay)
{
    printf("Ram is youngest\n");
}
if (raam>sham<ajay)
{

        printf("sham is youngest\n");

}

if (raam>sham>ajay)
{
        printf("ajay is youngest\n");

}

return 0;

}
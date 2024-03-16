#include<stdio.h>
int main()
{

int distance;
float meter,feet,inches;
printf("Enter the distance between tow cities in kilo meater:\n");
scanf("%d",&distance);

meter=distance*1000;
feet=distance*3280.84;
inches=distance*39370.079;
printf("Distance in meter is %f:\n",meter);
printf("Distance in feet is %f:\n",feet);
printf("Distance in inches is %f:\n",inches);

return 0;
}
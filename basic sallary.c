#include<stdio.h>
int main()
{

   int salary;
   float dearness,hr,grossal;
   printf("Enter the basic sallary\n");
   scanf("%d",&salary);

   dearness=salary*40/100;
   hr=salary*20/100;
   grossal=salary+hr+dearness;

printf("The house rent is:%f\n",hr);
printf("The darness is %f\n",dearness);
printf("The gross salary is %f\n",grossal);

}
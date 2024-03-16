#include<stdio.h>
int main()
{
      int unit[5]={12,55,46,695,226};         //Decliration with initilizion
      int marks[4];
      for (int i = 0; i < 4; i++)
      {
          printf("Enter the value of %d element of array is \n",i);
          scanf("%d",&marks[i]);

      }
      for ( int i = 0; i < 4; i++)
      {
            printf("The value of %d element is %d\n",i,marks[i]);
      }
      for (int f = 0; f < 5; f++)
      {
          printf("The value of %d element is %d\n",f,unit[f]);
      }
      
      
    return 0;
}

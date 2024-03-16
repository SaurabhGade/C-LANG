#include <stdio.h>
int main()
{
    char input;
float kmstomiles= 0.621371;
float inchestofeet=0.0833333;
float cmstoinches=0.393701;
float poundtokgs=0.453592;
float inchestometer=0.0254;
int first;


while (1)
{
   
    
    printf("Enter the input charcture q to quit.\n");
    printf("       k::: kms to miles\n       i::::inches to foot\n       c:::: cms to inches\n       p::: pound to kgs\n       u:::: inches to meaters\n");
    scanf("%c",&input);
    switch (input)
    {
    case 'q':
          printf("Program quit");
        goto end;
        break;
    case 'k': printf("Enter the Quanty in tearm of first unit\n");
    scanf("%d",&first);
        printf("%d Kms to miles are %f\n\n\n\n\n\n\n",first,kmstomiles*first);
        break;
    case 'i':
     printf("Enter the Quanty in tearm of first unit\n");
    scanf("%d",&first);
        printf("%d Inches to feet are %08.8f\n\n\n\n\n\n\n",first,inchestofeet*first);
        break;
    case 'c': printf("Enter the Quanty in tearm of first unit\n");
    scanf("%d",&first);
    printf("%d cms to inches are %08.8f\n\n\n\n\n\n\n",first,cmstoinches*first);
    break;
    case 'p': printf("Enter the Quanty in tearm of first unit\n");
    scanf("%d",&first);
    printf("%d pound to kgs are %08.8f\n\n\n\n\n\n\n",first,poundtokgs*first);
    break;
    case 'u': printf("Enter the Quanty in tearm of first unit\n");
    scanf("%d",&first);
    printf("Inches to Meter are %50.8f\n\n\n\n\n\n\n",first,inchestometer*first);

        break;
    }
    


}
  end:
    
    return 0;
}

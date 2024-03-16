//Arry is a group of variable.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0;
    int a[10];    //Declaration of arry //a[10] stand for numer of variable in a group.
    printf("Enter the 10 no\n");
    for (int i = 0; i < 10 ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The no you have enterd are");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=sum/10.0;
    printf("\nThe sum of 10 no is\t%d",sum);
    printf("\nThe avarage is %f\t",avg);
    
    return 0;
}

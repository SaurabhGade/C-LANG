#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("you can vote! \n");
    }
    else if (age>10)
    {
        printf("Yor are between 10 to 17 you can vote for kid \n");
    }
     else               //else is not must but ypu use these if you have need!
    {
        printf("You can't vote! \n");
    }
    
    return 0;
}

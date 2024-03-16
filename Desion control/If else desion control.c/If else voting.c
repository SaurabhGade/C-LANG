#include <stdio.h>
int main()
{
    int age;
    int agec;
    printf("enter your age:\n");
    scanf("%d", &age);
    printf("conferm your age:\n");
    scanf("%d", &agec);
    if (age == agec)
    {
        printf("you have entered your age is %d\n", age);
    }
    else
    {
        printf("age is is not match\n");
    }

if (age>18)
{
        printf("you can vete");

}

else (age<18);
{
    printf("you cant vote");
}


 return 0;
}
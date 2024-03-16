#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);

       switch (age)
       {
       case 3:
        printf("the age is 3\n");

                switch (marks)
             {
              case 45:
              printf("Your marks are 45\n");
              break;
        
        default:
            printf("Your marks are not 45\n");
        }
        break;
    case 33:
        printf("the age is 33\n");
        break;
    case 13:
        printf("the age is 13\n");
        break;
    default:
        break;
    }

    return 0;
}

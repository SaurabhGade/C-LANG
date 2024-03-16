//these is convineance function these is alternate of if else

/*Rules for switch statements
1:Expression must be int or char.
2:Case value must be int or char.
3:Case must come inside switch statement.
4:Breake is not must in switch statement.
*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        // break;                    //Here we comment out break because we have to chack whats happen if we did'n use break statement And we can see if we do not use break case 3 and 13 both gets exicutted 
        case 13:
        printf("the age is 13\n");
        break;                       //Case 23 does not gate exicutted because here is break statement
        case 23:
        printf("the age is 33\n");
        break;
    
    default:
    printf("Age is not 3,13 and 33\n");
        break;
    }
    
    return 0;
}
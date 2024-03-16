//Typedef is used for give nickname to datatype like int , chae , long , unsigned long.
//Old name of datatype is also valid name of datatype.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    typedef int berij;   //So bessically we gave nicknum berij to datatype int./and old name is also valid for use, It well not throw any error.

    berij a=1;
    berij b=2;
    berij c;
    c=a+b;
    printf("\nThe value of a is %d",a);
    printf("\nThe value of b is %d",b);
    printf("\naddion of a and b is%d",c);
    printf("\nEnter the no ");
    scanf("%d",b);
    printf("New value of b is %d",b);
    return 0;
}

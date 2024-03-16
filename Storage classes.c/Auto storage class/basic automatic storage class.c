#include<stdio.h>
int myfunc(int a, int b)
{
    auto int sum;  //when veriable define without any storage class then class specified automatically to auto.
    //Hence the   ****auto int sum == int sum.
    sum=a+b;
    return sum;
}
int main()
{
    int sum=myfunc(3,5);
    printf("The some is %d\n",sum);
    return 0;
}


//Declaration- Telling the compiler about the veriable (No space reversed).
//Defination- Declaration + space reservation.

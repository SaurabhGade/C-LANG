#include<stdio.h>
//static veriable only can inilised with the constant value otherwise it throw error.
int static_veriable()
{
       static int a=5;//static function will rember the changed value of vereible and if user not initilised it with any constant it automatically initilised with zero.
       a++; 
       return a;
}
int globle=78;  //This is globle veriable. we can use this in intyre program in any function i.e main and user difine functions.
int main()
{
        int a;
        printf("The value of globle veriable is: %d\n",globle);
        a =static_veriable();
        printf("The value of static veriable in first finction call is : %d\n",a);
        a =static_veriable();
        printf("value of static veriable in second function call is :%d\n",a);
        a =static_veriable();
        printf("value of static veriable in third function call is :%d\n",a); 
        a =static_veriable();



        return 0;
}

#include<stdio.h>
int myfunv(int a, int b)
{
    extern int sum;   //We can use veriable which have scope outside  the function
    //USING extern keyword...// If we not use extern keyword then gurbage value will print 
    //Because then function pic sum veriable which created in function which have local scope 
    //and local veriable are initilised with gurbage value.
    return sum;
}
int sum=98;     
int main()
{
       int sum=myfunv(5,5);
       printf("%d",sum);
    
    return 0;
}
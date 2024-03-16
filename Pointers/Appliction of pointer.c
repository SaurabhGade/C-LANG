//If we change value of formal argument thairs no effect on actual parameater.
//And function can't return more than one value.
//so we can use pointer .
//we can treate pointers in function as formal parameater and use in it main function.

#include<stdio.h>
void swap (int* x , int* y)   //Now if any cnages take pace in *x and *y which directly reflacted on actually values.
{
    int c;      
    c= *x;     /*So here we directly use pointer which hold address of a 
    *x=*y;     and address of b it if we change the values this new values are
    *y=c;      directly reflacted in a and b which are formal arguments*/
}
int main()
{
    int a,b;
    printf("Enter to number\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);    //So here we call a function but we give address of actual parameter to user define function.
    //We can written this as function call by reference or address.
    printf("%d\t%d",a,b);
    return 0;
}

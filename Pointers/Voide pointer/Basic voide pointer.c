//A voide pointer is a pointer that has NO DATA TYPE associated with it.
//A voide pointer can easaly typecasted to any pointer type.
//In simple language it is general purpose pointer veriable.
//Voide is a reversed keyword in C.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=5757;
    float b=78.4;
    void *ptr;
    ptr = &a;
    void *ptra = &b;
   // printf("The value a is %d\n",*ptr); //This will through error because we can not directly 
    //dereference  voide pointer.
    printf("The address of a is %d\n",*(&ptr));  //This line will print the address of *ptr.
    printf("The value of int a is %d\n",*(int*)ptr); //So here we typecasted ptr in int datarype and successfully printed the value of a.
    printf("The value of float b is %f\n",*(float*)ptra);
    return 0;
}
//Dangling pointer is the pointer which is point a memory location which is free. or deallocated.
#include<stdio.h>
#include<stdlib.h>
int * Function_Dangling()
{
    int a,b,sum;
    a=43;
    b=88;
    sum=a+b;
    return &sum;
}
int main()
{
    //DANGLING POINTER CAUSE.
    //CAUSE 1: De allocation of memory block.
    int *ptr=(int *) malloc(7* sizeof (int));
    ptr[0]=34;
    ptr[1]=4;
    ptr[2]=3;
    printf("%d",*(ptr+1));
    free (ptr); //ptr is a DANGLING pointer now.
    
    //CAUESE 2: Fuction returning local veriable address.
    int * dangptr = Function_Dangling();  //dangpter is now dangling pointer.
    //Now dangptr point a memory location which is deleted
    //Because sum have local scope ..

    //CAUSE 3: If the veriable out of scope.
    int *dangptr2;
    {  //Scope started.
        int a=12;  //After the scopea will be earsed.
        dangptr2=&a;
    }  //Scope end.
        //HERE A IS OUT OF SCOPE I.E. A WILL BE NO LONGER IN MEMORY.BUT STILL dangptr2 pointing a . so bacoming dangling pointer.
    
    return 0;
}
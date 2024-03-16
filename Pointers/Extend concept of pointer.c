//address of first bite of variable is called base address.
//only base address goes in pointer.
#include<stdio.h>
int main()
{
    //Pointer can hold only a pointer whis is is excatly -1 level form itself.
    //Ex. **q can only hold address of pointer of 1 level pointer like *p because **p is itself a 2 levle pointer.
    // And 1 level pointer can hot only veriable address.it cant hold the address of another variable.
    // It's called a level of indirection.

    int x=43;     //x is an int.
    int *p=&x;    // p contain only address of x so p is a first level pointer.
    //p is a pointer.
    int **q=&p;  // Her we use two astric because q is a pointer who held of a another pointer p.
    // So we can say q is 2nd level pointer.
    //q is pointer to a pointer to an int.

    int ***r=&q;  // So here we use three star before r Ie. third level pointer  because p itslf have 2 star ie.2nd level pointer .
    //So we need 3rd lvl pointer to store address of 2nd lvl pointer.    
    // r is pointer to a pointer to a pointer to apointer to an int.

    printf("%u\n,%u",*q,&p);
    return 0;
}

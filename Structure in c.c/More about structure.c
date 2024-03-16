//Structure is a way to group a elements.
//Structure is a collection of dissimilar elements.
//Defining structure means creating new data type.
//It is non primetive data tpye veriable.
//Structure can be set of similat elemenets or dissmiler elements (datatypes).
//NO memory consume for the defination of the structure.
//When we use structure to create veriable memory get consume.
//MEMORY IS ALLOCATED TO VERIABLE NOT A DATATYPE.
#include<stdio.h>
#include<string.h>
struct date
{
    int d,m,y; //This a golble defination structure .But we can create structure in a any function then the scpe of the structure will limits to this function. and this are the local defination function.

};

int main()
{
    struct date today={17,02,2022};   //This how we assign value's in structure veriable METHOD 1;
    printf("%d/%d/%d\n",today.d,today.m,today.y);
    today.d=33;
    today.m=89;
    today.y=303;
    printf("Updated valiues of structure are %d,%d,%d\n",today.d,today.m,today.y);
    struct date tomorrow;
    //COPIES VALUE FORM ONE STRUCTURE  TO ANOTHER STRUCTURE.//METHOD ONE:
    tomorrow.d=today.d;  //Here we copies the value of stucture today in structure tomorrow.
    tomorrow.m=today.m;//Here we copies the value of stucture today in structure tomorrow.
    tomorrow.y=today.y;   //Here we copies the value of stucture today in structure tomorrow.
    printf("Values which are copied in tomorrow are\n%d,%d,%d\n",tomorrow.d,tomorrow.m,tomorrow.y);

    //COPING VALUE FORM ONE STRUCTURE TO ANOTHER STRUCTURE...//METHOD TWO..
   today.d=2222;
   today.m=2433;
   today.y=9898;
   tomorrow=today; //Here we copies the values of today in tomorrow using one line statement .
   printf("Updated value of doday which copied in tomorrow using today = tomorrow is %d,%d,%d\n",tomorrow.d,tomorrow.m,tomorrow.y);

    return 0;
 }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input ()
//Here we declair function this function is returnin datatype book ....
//Because we create new datatype book using structure...so this function will return structure book and take nothing..
{
     struct book b; //so this fuction is without argument with return value type.
     printf("Enter the book title , book id and book price (Enter book price in ru.paise ex.43.03)\n");
     gets(b.title);
     fflush(stdin);   //stdin is the is  for denote input buffer....so buffer will clear and take data form keybord..This function contain in stdio.h .
     scanf("%d",&b.bookid);
     scanf("%f",&b.price);
     
     return (b);
}
void display (struct book b)   //This function is with argument and without return value....This will only print values...
//Now this function is take datatype book which is structure and return nothing..
//We only made this function to print values..
{
    printf("The book TITLE is : %s\n",b.title); 
   
    printf("Book price is %.2f\n",b.price);
    printf("The book id is %d",b.bookid);

}

int main()  
{
    struct book b1;
    b1=input();     //HERE WE CALL FUNCTION AND STORE RETURN VALUE IN   book b1;
    display(b1);    //and we here again call function and give argument b1....to print value .
    return 0;
}
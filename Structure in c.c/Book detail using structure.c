//We know that an array is collection of similar elements.
//And structure is also the collection of elecment but element can be differents type.
//Defining structure means creating new datatpe.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    int book_id;
    char title[52];
    float price;
    char Auther_Name[40];
};
int main()
{
    struct book book1;
    book1.book_id=3332;
    strcpy(book1.title , "BREEF HISTORY OF TIME");
    book1.price=(float)500;
    strcpy(book1.Auther_Name , "Stephen Hawking");
    printf("Book id:");printf("%d",book1.book_id);printf("\n");
    printf("Title is:"); puts(book1.title);
    printf("price is:%.2f Rupee\n",book1.price);
    printf("Auther Name is: %s\n",book1.Auther_Name);
    
    return 0;
}
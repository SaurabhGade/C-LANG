/*  Important point:
1. Union is user defint datatype (very similar to structure)
2. In structure every member has its own memory location.
3. But in Union member uses a single shared memory location.
4. These single shared memory location is equal to the size of its largest data member.
5. If we place union at struct position of a structure it becomes union.*/
#include<stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char gread;
    char name[40];
};

int main(int argc, char const *argv[])
{
    union student s1;  //The size of biggest member is shared between all all members.so thare no specific memory for each member.
    s1.id=1;            //Because of these only one member can run at a time.
    s1.gread='a';       //  So id, gread , name get cureptted and and throw garbage value.
    strcpy(s1.name,"Saurabh Gade");   //And only last live value is not get curptted and print corectly.
    s1.marks=57;      //Only these lint will not get currepted.

    printf("The  id is %d \n",s1.id);
    printf("The marks is %d \n",s1.marks);
    printf("The greade is %c \n",s1.gread);
    printf("The name is %s \n",s1.name);




    
    
    return 0;
}

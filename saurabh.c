#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int age;
    float hight;
    int roll_no;

} saurabh;

int main()
{
    struct student * ptr;
    ptr=&saurabh;
    strcpy(*ptr->name="saurabh");
    return 0;
}
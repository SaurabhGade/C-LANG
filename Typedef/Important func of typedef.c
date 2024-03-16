#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    int marks;
    char greade;
    char name[40];
}std ;     //Here we give a nickname to structure student as std;,so now both struct studen and std are valid datatype.     

int main()
{
    std saurabh,itachi;      //Here we use structure but with his nickname.
    saurabh.id=89;
    itachi.id=88;
    saurabh.marks=900;
    itachi.marks=3999;
    saurabh.greade='b';
    itachi.greade='a';
    strcpy(saurabh.name,"Saurabh Gade");
    strcpy(itachi.name,"Itachi Uchiha");
    printf("Name : %s\nid : %d\nmarks : %d\n,gread :%c\n",saurabh.name,saurabh.id,saurabh.marks,saurabh.greade);
    printf("Name : %s\nid : %d\nmarks : %d\n,gread :%c\n",itachi.name,itachi.id,itachi.marks,itachi.greade);

    return 0;
}


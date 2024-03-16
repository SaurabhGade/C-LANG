// Stucture are user defint data types in c.
// Using structure allows us to combine data of different datatypes toughter.
// It used to create a complex data type which contain diverse information.
// They are very similar to array but can store of any datatype.
// To access the member of structure we use structure member operator.
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fev_char;
    char name[34];
};
   // struct student saurabh, sakshi, itachi;   // If we use here it bacomes globle variable.

int main()
{
    struct student saurabh, sakshi, itachi;   //Local variable.
    saurabh.id = 43;
    sakshi.id = 44;
    itachi.id = 88;
    saurabh.marks = 747;
    sakshi.marks = 748;
    itachi.marks = 585;
    saurabh.fev_char = 's';
    sakshi.fev_char = 's';
    itachi.fev_char = 'p';
    strcpy(sakshi.name, "skashi is a bitch");
    strcpy(itachi.name, "Itachi Uchiha");
    strcpy(saurabh.name, "Saurabh Gade");
    printf("Saurabh name is : %s\n", saurabh.name);
    printf("Saurabh got %d marks\n%d is his ID\n%c is fevorite charcture ", saurabh.marks, saurabh.id, saurabh.fev_char);
    printf("\n");
    printf("\nSakshi full name is :%s", sakshi.name);
    printf("\nSakshi got %d marks\nAnd %d is her ID\n %c is fevorite charcture ", sakshi.marks, sakshi.id, sakshi.fev_char);
    printf("\n");
    printf("\nItachis full name is : %s", itachi.name);
    printf("\nItachi got %d marks\nAnd %d is his ID\n %c is fevorite charcture ", itachi.marks, itachi.id, itachi.fev_char);

    return 0;
}

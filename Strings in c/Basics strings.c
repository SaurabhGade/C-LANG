//strings is 'not' a dataype in c.
// string is a null traminated charcture array.
//'\0' ie. Null charcture, for terminate array of string.
// size of string is string + 1 one for '\0'.
// Ex. 1) char name[]="saurabh";   //If we use double code compiler place '\0' ie. null charcture at end.
//     2) char name[]={'s','a','u','r','a','b','h','\0'};
// For print we can use printf(); or puts(); function.
#include<stdio.h>
void printstar (char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[]={'s','a','u','r','a','b','h','\0'};   // Null charcture is important
    char star[]="saurabh";
    printstar(str);
    printf("\n%s",str);
    printf("\n%s\n",star);
    char s[34];
    gets(s);        //Gets work as a scanf functon hear. we use the function for takeing string form keybord. We can use 'scanf' function but plane white spaces can not taken by scanf.
    printf("\nUsing printf       %s\n",s);
    printf("Using puts \t");
    puts(s);
    return 0;
}

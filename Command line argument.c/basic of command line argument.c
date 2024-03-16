#include<stdio.h>
int main(int argc, char const *argv[]) // In these line argc holds the no of the argument.
// argv is a pointer which hold the address of the address of the first block of the array . i.e argv is the pointer array. or charcture array.

{
    printf("The value of argc is %d\n",argc); //This will give the value of argument which is given by command line argument.
    // if we write some argument after a.exe file leke if I type .\a.exe saurabh gade the it will return the value of argc is 3 because on 0th index is occupied by the name of the program,
    // 1st and  2nd index is occupied by argument's.

    for (int i = 1; i < argc; i++) //this for loop will printe values of argv[] on differnt indese's.
    {
        printf("Argument at indexe %d\t has a value is %s\n",i,argv[i]);
    }
    

    return 0;
}
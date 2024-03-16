#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int turn;
int flag[2] = {0, 0};
void petersonSolnP0()
{
        turn = 1;
        flag[0] = 1;
        while (turn == 1 && flag[1] == 1)
            ;
        printf("In the critical section");
        printf("\nworking on critical section");
        for (int i = 0; i < 10000; i++)
        {
        }
        printf("Work done , \"flag gives to next process\"");
        flag[0] = 0;
}
void petersonSolnP1()
{
    turn = 0;
    flag[1] = 1;
    while (turn == 0 && flag[0] == 1);
    printf("In the critical section");
    printf("\nworking on critical section");
    for (int i = 0; i < 10000; i++)
    {
    }
    printf("Work done , \"flag gives to next process\"");
    flag[1] = 0;
}
int main()
{
    petersonSolnP0();
    petersonSolnP0();
    return 0;
}
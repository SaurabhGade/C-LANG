#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][4] = {{5, 5, 46, 54}, {3, 6, 9, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

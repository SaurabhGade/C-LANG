#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int rand(int a)
{
    srand(time(NULL));
    return srand()%a;
}
int main()
{
    printf("The random number between 0 to 100 is %d\n", rand(40));

    return 0;
}
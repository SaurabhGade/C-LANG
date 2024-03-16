#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("The file name is %s\n",__DATE__);
    printf("Today's date is %s\n",__DATE__);
    printf("The time now is %s\n",__TIME__);
    printf("The line is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);

    return 0;
}
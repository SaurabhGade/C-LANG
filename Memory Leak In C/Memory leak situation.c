#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a , i=0;
    int * iw;
    while (i<4848)
    {
        printf("saruabh \t");
        iw=malloc(3333 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
            
        }
        i++;
        free(iw);   //Withouot these we incounter the situation of memory leak //If you do not use free() to free memory you can watch memory useage of program will keep increasing untill programm is crass.
    }

    return 0;
}

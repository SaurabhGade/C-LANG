// consider a system has 32 bit logical address space with a 4-kb page size. write a C command line that passed a virtual address (in decimal) on
//  the command line and have it output the page number and offset for athe given address.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int arr[32];
    for (int i = 0; i < 32; i++)
    {
        arr[i] = 0;
    }
    if (argc == 1)
    {
        printf("You do not enter any Logical address in the command line");
        goto end;
        
    }
    int c = atoi(argv[1]);
    int temp = c;
    int j = 31;
    for (int i = 0; i < 32; i++)
    {
        if (temp % 2 == 1)
        {
            arr[j] = 1;
        }
        else
        {
            arr[j] = 0;
        }
        j--;
        temp = temp / 2;
    }
    int offset = 0;
    int pageNo = 0;
    int m = 0;
    int n = 0;

    for (int i = 31; i >= 20; i--)
    {
        
            if (arr[i] == 1)
            {
                offset += pow(2, m);
            }
        m++;
    }
    m= 0;
    for(int i = 19 ; i >= 0 ; i--){
        if(arr[i] == 1){
            pageNo += pow(2 , m);
        }
        m++;
    }
    
    printf("The address %d contains :\n",c);
    printf("page number = %d\n",pageNo);
    printf("offset = %d", offset);
    end:
    return 0;
}

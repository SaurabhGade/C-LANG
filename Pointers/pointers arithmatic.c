//Pointere consume 4 byte in 32 bit architechare and 8 byte in 64 bit architecture.
//We can not  add,multiply,or divied address TO ADDRESS.
//But we can do substraction.
/*We can not multiply an intiger to an address
similary we cannot divide an address weth an integer value.
*/
//...............................................................................................................................................................
//...............................................................................................................................................................
//...............................................................................................................................................................

/* SO WHATS WE CAN DO */
/*
 We can do substrack intiger to/form an address.
 Ex:::: If the base address of int p is 1000 and we add 1  //*p+1=1004.
 ...because 1000 is a base address and +1 means address of next variable NOT AN ADDRESS OF SECOND MEMORY BLOCK.
 IN 64 BIT ARCHITECTURE , SIZE OF INT IS 4 SO IT ADD +4 IN THE BASE ADDRESS. SECOND VEREABLE ADDRESS IS 1004
 Same thing apply to sustraction //*p-1=996;
 
 Ex:::: if the base address of charcture q is 1000
 IN CHAR VARIABLR CASE
 Charcture takes 2 byte memory
 so if we add +1 in an address so the is 1002 because 1002 is an address of a second variable.
 and same if we *q-1=998
 ...............................................................................................................................................................
 ...............................................................................................................................................................
 ...............................................................................................................................................................
Basic formula::
 Pointer + n = Pointer + (size of pointer datatype * n)
 */

#include<stdio.h>
int main()
{
    int a=34;
    char c;
    int* ptra=&a;
    char* s=&c;

    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);
    printf("%d\n",s);
    printf("%d\n",s+2);
    printf("%d\n",*ptra);
    
    
    return 0;
}

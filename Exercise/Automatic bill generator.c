#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * billgenarator (char * str , char * oldword , char * newword);
{
    
}
int main()
{
    FILE * ptr=NULL;
    FILE * ptr2=NULL;
    ptr=fopen("bill.txt","r");    
    ptr2=fopen("genbill.txt","w");    
    char str[250];
    fgets(str , 250 , ptr);
    printf("The given bill templet was :\n%s\n",str);
    
    char * newStr = str;
    printf("The new generated bill is:\n%s\n",newStr);
    fprintf(ptr2 , "%s" , newStr);
    fclose(ptr);
    fclose(ptr2);




    return 0;
}
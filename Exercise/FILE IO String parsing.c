#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void parsor(char *str)
{
    int in=0, index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='<')
        {
            in = 1;
            continue;
        }
        else if (str[i]=='>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index]=str[i];
            index++;
        }
    } 
    str[index]='\0';
    while (str[0]==' ')
    {
          for (int i = 0; i < strlen(str); i++)
        {
            str[i]=str[i+1];
        }
    }
    while (str[strlen(str)-1]==' ')
    {
        str[strlen(str)-1]='\0';
    }
    
    
}
int main()
{
    FILE *ptr;
    ptr = fopen("parsor.txt", "r");
    char str[700];
    fflush(stdin);
    fgets(str, 700, ptr);
    printf("The string without parse is:\n");
    puts(str);
    parsor(str);
    printf("String after parse\n");
    printf("\n~~%s~~", str);
    fclose(ptr);
    FILE * fptr;
    fptr=fopen("parsedParsor.txt","w");
    fputs(str , fptr);
    fclose(fptr);
    return 0;
}
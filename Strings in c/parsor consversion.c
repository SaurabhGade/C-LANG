#include <stdio.h>
#include <string.h>
void parsor(char *string)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')     //If Dision control statement  found '<' this characture control statement  will continue; and in initilised in with 1.
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>') //when Dision control statement found '<' thhis characture control statement will continue; and in intilisea with 0;
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while (string[0] == ' ')
        
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
    
}
int main(int argc, char const *argv[])
{
    char string[] = "<h1saurabh >     This is the string     <saurabh /h1>";
    parsor(string);
    printf("~~%s~~", string);
    return 0;
}

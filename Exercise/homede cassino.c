#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int RandomNomber (int a)
{
    srand(time(NULL)); 
    return rand() % a;
}
int main()
{
    while (1)
    {
        char name[30];
        int userno,rno;
        char s;
        printf("~~~~~~~~~~~~~~~~~~WELCOME TO HOMEMADE CASINO~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("press any characture to continue and press q to quit\n");
        scanf("%c",&s);
        if (s=='q')
        {
            goto end;
        }
        
        printf("Enter you name:\n");
        fflush(stdin);
        gets(name);
        printf("~~~~~~~~~~WELCOME %s~~~~~~~~~~~\n",name);
        printf("Choose no between 0 to 10\n");
        fflush(stdin);
        scanf("%d",&userno);
        rno=RandomNomber(10);
        printf("computer entered %d\n",rno);
        if (userno == rno)
        {
            printf("CONGRATULATION YOU WON\n");
        }
        else{
            printf("YOU LOOSE\n");
        }
        
    }
    end:
    
    return 0;
}
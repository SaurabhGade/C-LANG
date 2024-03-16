#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int generateRandomNumber(int n)
{
    srand(time(NULL)); 
    return rand() % n;
}
int main()
{
    int r1c,r1u,r2c,r2u,r3c,r3u;
    int totalu,totalc;

    int bchoose;
    int uchoose;
    int choice;

    int bot = generateRandomNumber(2);
    int bot2,bot3;
    char name[20];
    printf("***************************************************WELECOME TO ROCK PAPER SCISSORS***********************************************************\n");
    printf("Enter your Name\n");
    gets(name);
    printf("Your have enter your name is:");
    puts(name);
    bot=generateRandomNumber(2);//////////////
    printf("***************ROUND 1**********************\n");
    new:
    printf("Enter\n0: For stone\n1: for paper\n2: for scissors\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 0:
        printf("You choose STONE\n");
        uchoose=0;
        break;
    case 1:
        printf("You choose PAPER\n");
        uchoose=1;
        break;
    case 2:
        printf("You chooose SCISSOR\n");
        uchoose=2;
        break;
    default:
         printf("You choose invalid HAND SIGH ......please choose again\n");
         goto new;
        break;
    }
    switch (bot)
    {
    case 0:
        printf("Computer show STONE\n");
        bchoose=0;
        break;
    case 1:
        printf("Computer show PAPER\n");
        bchoose=1;
        break;
    case 2:
        printf("computer show SCISSOR\n");
        bchoose=2;
        break;
    default:
        break;
    }
    if (uchoose == bchoose)
    {
        printf("Round drow\n");
        r1c=0;
        r1u=0;

    }
    else if (bchoose != uchoose )
    {
        if ((uchoose == 0 && bchoose ==1) || (uchoose == 2 || bchoose == 0)  || (uchoose == 1 && bchoose==2))
        {
            printf("COMPUTER WON\n");
            r1c=1;
            r1u=0;
            
        }
        //////////////////////////////////////////////////
        else if ( (bchoose == 0 && uchoose == 1) || (bchoose == 2 && uchoose == 0) || (bchoose == 1 && uchoose == 2))
        {
            printf("YOU WON\n");
            r1c=0;
            r1u=1;

        }
    }

    bot2=generateRandomNumber(2);
    printf("***************ROUND 2**********************\n");
    new2:
    printf("Enter\n0: For stone\n1: for paper\n2: for scissors\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 0:
        printf("You choose STONE\n");
        uchoose=0;
        break;
    case 1:
        printf("You choose PAPER\n");
        uchoose=1;
        break;
    case 2:
        printf("You chooose SCISSOR\n");
        uchoose=2;
        break;
    default:
         printf("You choose invalid HAND SIGH ......please choose again\n");
         goto new2;
        break;
    }
    switch (bot2)
    {
    case 0:
        printf("Computer show STONE\n");
        bchoose=0;
        break;
    case 1:
        printf("Computer show PAPER\n");
        bchoose=1;
        break;
    case 2:
        printf("computer show SCISSOR\n");
        bchoose=2;
        break;
    default:
        break;
    }
    if (uchoose == bchoose)
    {
        printf("Round drow\n");
        r1c=0;
        r1u=0;

    }
    else if (bchoose != uchoose )
    {
        if ((uchoose == 0 && bchoose ==1) || (uchoose == 2 || bchoose == 0)  || (uchoose == 1 && bchoose==2))
        {
            printf("COMPUTER WON\n");
            r1c=1;
            r1u=0;
            
        }
        //////////////////////////////////////////////////
        else if ( (bchoose == 0 && uchoose == 1) || (bchoose == 2 && uchoose == 0) || (bchoose == 1 && uchoose == 2))
        {
            printf("YOU WON\n");
            r1c=0;
            r1u=1;

        }
    }
    bot3=generateRandomNumber(2);
    printf("***************ROUND 3**********************\n");
    new1:
    printf("Enter\n0: For stone\n1: for paper\n2: for scissors\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 0:
        printf("You choose STONE\n");
        uchoose=0;
        break;
    case 1:
        printf("You choose PAPER\n");
        uchoose=1;
        break;
    case 2:
        printf("You chooose SCISSOR\n");
        uchoose=2;
        break;
    default:
         printf("You choose invalid HAND SIGH ......please choose again\n");
         goto new1;
        break;
    }
    switch (bot3)
    {
    case 0:
        printf("Computer show STONE\n");
        bchoose=0;
        break;
    case 1:
        printf("Computer show PAPER\n");
        bchoose=1;
        break;
    case 2:
        printf("computer show SCISSOR\n");
        bchoose=2;
        break;
    default:
        break;
    }
    if (uchoose == bchoose)
    {
        printf("Round drow\n");
        r1c=0;
        r1u=0;

    }
    else if (bchoose != uchoose )
    {
        if ((uchoose == 0 && bchoose ==1) || (uchoose == 2 || bchoose == 0)  || (uchoose == 1 && bchoose==2))
        {
            printf("COMPUTER WON\n");
            r1c=1;
            r1u=0;
            
        }
        //////////////////////////////////////////////////
        else if ( (bchoose == 0 && uchoose == 1) || (bchoose == 2 && uchoose == 0) || (bchoose == 1 && uchoose == 2))
        {
            printf("YOU WON\n");
            r1c=0;
            r1u=1;

        }
    }
    totalc=r1c+r2c+r3c;
    totalu=r1u+r2u+r3u;
    if (totalc == totalu)
    {
        printf("\vMATCH DROW\n");
        printf("\v");

    }
    else if (totalc > totalu);
    {
        printf("\vCOMPUTER WINS");
        printf("\v");
    }
    if (totalc < totalu)
    {
        printf("\v");
        printf("\vYOU WINS");
        
    }
    
    
    return 0;
}

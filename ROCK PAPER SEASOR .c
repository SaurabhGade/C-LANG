#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int decide(char c, char p)
{

    if (c == p)
    {
        return -1;
    }
    else if (c == 'r' && p == 's' || c == 'p' && p == 'r' || c == 's' && p == 'p')
    {
        return 1;
    }
    else if (p == 'r' && c == 's' || p == 'p' && c == 'r' || p == 's' && c == 'p')
    {
        return 0;
    }
}

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{

    int playerscore = 0, compscore = 0, temp;
    char playerchar, computerchar;
    char name[30];
    char dict[] = {'r', 'p', 's', '\0'};
    printf(".........WELCOME TO ROCK PAPER SESOR............\n");
    printf("ENTER YOUR NAME\n");
    gets(name);
    printf("WELCOM %s\n", name);
    for (int i = 1; i < 4; i++)
    {
        printf("\nROUND %d\n", i);
        printf("YOUR'S TURN\n");
        new : printf("ENTER: \n1:FOR ROCK\t2:FOR PAPER\t3:FOR SCISSOR\n");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        switch (playerchar)
        {
        case 'r':
            printf("YOU CHOOSE ROCK\n");
            break;
        case 'p':
            printf("YOU CHOOSE PAPEaR\n");
            break;
        case 's':
            printf("YOU CHOOSE SCISSOR\n");
            break;
        default:
            printf("YOU CHOOSE INVALID CHARCTURE");
            goto new;
            break;
        }
        printf("COMPUTERS TURN\n");
        temp = generateRandomNumber(3);
        computerchar = dict[temp];
        switch (computerchar)
        {
        case 'r':
            printf("COMPUTER'S PICKS ROCK\n");
            break;
        case 'p':
            printf("COMPUTER'S PICKS PAPER\n");
            break;
        case 's':
            printf("COMPUTER'S PICKS SCISSOR\n");
            break;
        }

        if (decide(computerchar, playerchar) == 1)
        {
            compscore += 1;
        }
        else if (decide(computerchar, playerchar) == 0)
        {
            playerscore += 1;
        }
        else if (decide(computerchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
        }
    }

    ////////////////////////////////////////////////////////////////////////;;;;;;;;;

    if (compscore < playerscore)
    {
        printf("CONGRULATION YOU WIN's \n");
    }
    else if (compscore > playerscore)
    {
        printf("COMPUTER WIN's");
    }
    else
    {
        printf("MATCH DROW\n");
    }
    return 0;
}

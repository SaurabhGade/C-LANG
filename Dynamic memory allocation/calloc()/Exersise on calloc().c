   // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
//Challenge accepted 
//code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
int main()
{
    char* id;
    id=(char*)calloc(n,sizeof (char));
    start:
    printf("Enter how many charcture your id contain\n");
    scanf("%d",&n);
    printf("Enter your id which conthain %d chercture\n",n);
    scanf("%s",*(&id));
    if (strlen(id) == n)
    {
        printf("Your id is:\t");
        puts(id);
        printf("Your id is taken........\n");
    }
    else{
    printf("You have entered invalid id please enter your id again\n");
    goto start;
    };



    printf("Enter how many charcture your id contain\n");
    scanf("%d",&n);
    printf("Enter your id which conthain %d chercture\n",n);
    scanf("%s",*(&id));
    if (strlen(id) == n)
    {
        printf("Your id is:\t");
        puts(id);
        printf("Your id is taken........\n");
    }
    else{
    printf("You have entered invalid id please enter your id again\n");
    goto start;
    };

    printf("Enter how many charcture your id contain\n");
    scanf("%d",&n);
    printf("Enter your id which conthain %d chercture\n",n);
    scanf("%s",*(&id));
    if (strlen(id) == n)
    {
        printf("Your id is:\t");
        puts(id);
        printf("Your id is taken........\n");
    }
    else{
    printf("You have entered invalid id please enter your id again\n");
    goto start;
    };
    free(id);


    return 0;
}
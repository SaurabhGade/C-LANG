#include <stdio.h>
#include <string.h>
typedef struct drivers
{
    char name[50];
    char dlsr[43];
    char root[50];
    int kms;
} drv;
int main()
{
    printf("~~~~~WELCOME TO INDIAN TRAVEL ENGENCY~~~~~~~~~~~~\n");
    drv d1, d2, d3;
    printf("Enter the details of first driver\n");
    printf("Enter the name of first driver\n");
    gets(d1.name);
    printf("Enter the DL no of the first driver\n");
    gets(d1.dlsr);
    printf("Enter your root\n");
    gets(d1.root);
    printf("Enter your travel distance\n");
    scanf("%d", &d1.kms);
///////////////////////////
    printf("Enter the details of second driver \n");
    printf("Enter the name of second driver\n");
    scanf("%s",&d2.name);
    printf("Enter the DL no of the second driver\n");
    scanf("%s",&d2.dlsr);
    printf("Enter your root\n");
    scanf("%s",&d2.root);
    printf("Enter your travel distance\n");
    scanf("%d", &d2.kms);
/////////////////////////
    printf("Enter the details of third driver\n");
    printf("Enter the name of third driver\n");
    scanf("%s",&d3.name);
    printf("Enter the DL no of the third driver\n");
    scanf("%s",&d3.dlsr);
    printf("Enter your root\n");
    scanf("%s",&d3.root);
    printf("Enter your travel distance\n");
    scanf("%d", &d3.kms);

    printf("*********************PRINTING DETAILS**************************\n");
    
    printf("Details of first driver\n");
    printf("\v");
    printf("Name of the first driver is %s\n", d1.name);
    printf("dlsr of the first driver is %s\n", d1.dlsr);
    printf("rout of the first driver is %s\n", d1.root);
    printf("distance of the first driver is %d\n", d1.kms);
////////////////////
    printf("Details of second driver\n");
    printf("\v");
    printf("Name of the second driver is %s\n", d2.name);
    printf("dlsr of the second driver is %s\n", d2.dlsr);
    printf("rout of the second driver is %s\n", d2.root);
    printf("distance of the second driver is %d\n", d2.kms);
///////////////////
    printf("Details of third driver\n");
    printf("\v");
    printf("Name of the Third driver is %s\n", d3.name);
    printf("dlsr of the Third driver is %s\n", d3.dlsr);
    printf("rout of the Third driver is %s\n", d3.root);
    printf("distance of the Third driver is %d\n", d3.kms);
    return 0;
}

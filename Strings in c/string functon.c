#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "saurabh";
    char s2[] = "sakshi";
    char s3[54];
    //puts(strcat(s1, s2));
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s1 is %d\n", strlen(s2));
    printf("The reverse string of s1 is:");
    puts(strrev(s1));
    printf("The reverse string of s2 is:");
    printf(strrev(s2));
    printf("\nThe copy of s1 and s2 is :");
    strcpy(s3,strcat(s1,s2));   //s3 will print return because we already us strrev().
    puts(s3);
    printf("\nThe copy of s1 and s2 print using printf functiion is : %s",s3);
    
    char s5[]="Ithachi";
    char s6[]="Pain";
    printf("The strcmp for s5 , s6 return %d",strcmp (s5,s6));     //We can not expect ascii form strcmp because c standerd says strcmp() return >0,<0,0.
    //Here we know I comes before P , so it return negitive value.If the first string and 1st charcture of 2nd string are same then its return 0. and If the first string first charcture comes after second string first charcture then the its return positive value.

    return 0;
}

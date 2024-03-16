#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int abc;
int Palindrome(int n)
{
    int original, reversed = 0, remender;
    original = n;
    while (n > 0)
    {
        remender = n % 10;
        reversed = reversed * 10 + remender;
        n /= 10;
    }
    abc = reversed;

    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num, backup;
    printf("Enter the number which you want to chack for Palindrome\n");
    scanf("%d", &num);
    backup = Palindrome(num);
    if (backup == 1)
    {
        printf("The reverse of %d is %u\nSo the number is palindrome\n", num, abc);
    }
    else
    {
        printf("the reverse of %d is %u so The number is not a Palindrome no\n", num, abc);
    }

    return 0;
}
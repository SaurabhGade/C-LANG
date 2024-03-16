#include <stdio.h>
int main()
{
    int side1, side2, side3, largeside, sum;
    printf("Enter three sides of trangle\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 > side2)
    {
        if (side1 > side3)
        {
            sum = side2 + side3;
            largeside = side1;
        }
        else
        {
            sum = side1 + side2;
            largeside = side3;
        }
    }
    else
    {
        if (side3 < side2)
        {
            sum=side1+side3;
            largeside=side2;
        }
        
            else
            {
                sum = side1 + side2;
                largeside = side3;
            }
        }

        if (sum > largeside)
        {
            printf("The trangle is valid\n");
        }
        else
            printf("Trangle is invalid\n");

        return 0;
    }
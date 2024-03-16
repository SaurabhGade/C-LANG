#include <stdio.h>
#include <stdlib.h>
int n;
int main()
{
    int *r;
    int *s;
    int *sum;
    r = (int *)malloc(n * sizeof(int));
    s = (int *)malloc(n * sizeof(int));
    sum = (int *)malloc(n * sizeof(int));
    printf("How many mumber do you want to add\n");
    scanf("%d", &n);
    printf("Enter the first %d numbers\n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &r[i]);
    }
    printf("Enter second %d numbers\n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] = *(&r[i]) + *(&s[i]);
        printf("sum of %d two no is %d", i, *(&sum[i]));
        printf("\n");
    }

    free(s);
    free(r);
    free(sum);

    r = (int *)malloc(n * sizeof(int));
    s = (int *)malloc(n * sizeof(int));
    sum = (int *)malloc(n * sizeof(int));
    printf("How many mumber do you want to multiply\n");
    scanf("%d", &n);
    printf("Enter the first %d numbers\n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &r[i]);
    }
    printf("Enter second %d numbers\n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] = (*(&r[i])) * (*(&s[i]));
        printf("multiplication of %d two no is %d", i, *(&sum[i]));
        printf("\n");
    }
    free(s);
    free(r);
    free(sum);

    return 0;
}
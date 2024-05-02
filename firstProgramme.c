#include <stdio.h>

int main(void)
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (i >= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i + 1; j++)
        {
            if (i <= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
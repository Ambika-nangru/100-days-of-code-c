#include <stdio.h>

int main()
{
    int i, j;

    // Upper half
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}#include <stdio.h>

int main()
{
    int n, i, j, count;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}
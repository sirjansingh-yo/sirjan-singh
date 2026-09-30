#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 1; i++)
    {
        for(j = 1; j <= 1; j++)
            printf("*");
        printf("\n\n");
    }

    for(i = 1; i <= 1; i++)
    {
        for(j = 1; j <= 4; j++)
            printf("*");
        printf("\n\n");
    }

    for(i = 1; i <= 1; i++)
    {
        for(j = 1; j <= 5; j++)
            printf("*");
        printf("\n\n");
    }

    for(i = 1; i <= 1; i++)
    {
        for(j = 1; j <= 3; j++)
            printf("*");
        printf("\n\n");
    }

    printf("*");

    return 0;
}
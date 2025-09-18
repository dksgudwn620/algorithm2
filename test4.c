#include <stdio.h>

int main(void)
{
    int n;

    printf("몇 단 삼각형입니까?: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
            printf(" ");
        for (int j = 0; j < 2*i+1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

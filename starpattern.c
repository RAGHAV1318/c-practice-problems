#include <stdio.h>

int main()
{
    int a,;
    printf("ENTER THE NUMBER OF LINES:");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int z = 0; z < 2 * i + 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
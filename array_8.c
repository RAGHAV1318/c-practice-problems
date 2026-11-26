#include <stdio.h>

int main()
{

    int x, y, z;
    printf("ENTER THE 3 CUSTOM VALUES\n");

    scanf("%d %d %d", &x, &y, &z);

    int a[3][10];
    int b[] = {x, y, z};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = b[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("THE VALUE OF A[i][j] IS: %d\n", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
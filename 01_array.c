#include <stdio.h>

int main()
{
    int mark[04];
    printf("ENTER THE 4 NUMBERS \n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &mark[i]);
    }

    int *ptr = mark;

    printf("THE VALUE AT THE ADRRESS %u is %d\n", ptr + 2, *(ptr + 2));

    return 0;
}




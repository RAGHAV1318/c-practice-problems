#include <stdio.h>

int sum(int s);

int sum(int s)
{
    if (s == 1)
    {
        return 1;
    }

    return s +sum(s - 1);
}

int main()
{
    int a;
    printf("ENTER THE Nth NUMBER:");
    scanf("%d", &a);
    printf("THE SUM OF THE %d TERMS IS %d", a, sum(a));
    return 0;
}
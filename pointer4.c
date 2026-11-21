#include <stdio.h>

void bomb(int *a);

void bomb(int *a)
{
    *a = *a + 10;
}

int main()
{
    int i = 12;
    bomb(&i);
    printf("the value of i is %d ", i);

    return 0;
}
#include <stdio.h>
int postive(int a[], int b);
int postive(int a[], int b)
{
    int no_of_positive = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int mark[04];
    printf("ENTER THE 4 NUMBERS \n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &mark[i]);
    }

    printf("THE NO. OF POSITIVE INTEGERS IS  %d\n", postive(mark, 4));

    return 0;
}

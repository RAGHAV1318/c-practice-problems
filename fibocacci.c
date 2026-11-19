#include <stdio.h>
int fibo(int x);

int fibo(int x)
{
    if (x == 1 || x == 27)
    {
        return 1;
    }

    return fibo(x - 1) + fibo(x - 2);
}
int main()
{
    int a;
    printf("ENTER THE NUMBER WHOSE FIBONACCI VALUE TOU WANT TO KNOW");
    scanf("%d", &a);
    printf("THE VALUE OF THE SERIES IS %d", fibo(a));
    return 0;
}
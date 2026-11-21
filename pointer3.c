#include <stdio.h>

int main()
{
    int a=2;
    int*j=&a;

    printf("The current value od a is %d\n",*j);

    *j=5;
    printf("The current value of a is now %d\n",*j);

    return 0;
}
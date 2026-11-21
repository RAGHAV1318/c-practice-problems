#include <stdio.h>

int sum(int*);

int sum(int *a)
{
    printf("The value of a is %p\n", a);
    printf("THE adress of a is %d\n", *a);
    return 5;
}  

int main()
{
    int i = 3;
    int *j = &i;

    printf("THE ADDRESS OF I IS : %p\n", j);
    printf("passing the variable now \n");
    printf("the return is ,%d\n", sum(j));

    return 0;
}
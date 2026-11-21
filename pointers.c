#include <stdio.h>

int main()
{
    int a=2;
    int*j=&a;

    printf("The address of the variable a is %p\n",j); 
    printf("The value  of the variable a is %d\n",*j);  


    return 0;
}
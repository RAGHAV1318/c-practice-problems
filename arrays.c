#include <stdio.h>

int main()
{
    int mark[90];//Reserve space for 90 integers
     mark[0]=45;
     mark[1]=76;
// you can go upto 89 but not more than that because we have reserved space for 90 integers

     printf("THE MARKS 1 AND 2 ARE %d AND %d",mark[0],mark[1]);
    return 0;
}
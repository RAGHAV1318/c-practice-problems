#include <stdio.h>

int main()
{
    int mark[5];//Reserve space for 5 integers
    printf("ENTER THE MARKS OF 5 STUDENTS\n"); 
    // scanf("%d",&mark[0]);
    // scanf("%d",&mark[1]);
    // scanf("%d",&mark[2]);
    // scanf("%d",&mark[3]);
    // scanf("%d",&mark[4]);
   
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d",&mark[i]);
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("THE MARKS AT INDEX %d is %d\n",i,mark[i]);
    }
    
    // printf("THE MARKS 1 ARE: %d\n",mark[0]);
    // printf("THE MARKS 2 ARE: %d\n",mark[1]);
    // printf("THE MARKS 3 ARE: %d\n",mark[2]);
    // printf("THE MARKS 4 ARE: %d\n",mark[3]);
    // printf("THE MARKS 5 ARE: %d\n",mark[4]);
    return 0;
}
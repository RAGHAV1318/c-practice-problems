#include <stdio.h>

int main()
{
    int table[10];
    int n;
    printf("PLEASE ENTER THE NUMBER WHOOSE TABLE YOU WANT\n");
    scanf("%d",&n);
    for(int i =0; i<10; i ++){
        table[i]= (i+1)*n;
       
    }

    for(int i =0;i<10; i++){
            printf(" THE VALUE OF %d x %d is %d\n",n,i+1, table[i]);
            
        }
    return 0;
}
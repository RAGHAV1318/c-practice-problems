#include <stdio.h>

int main()
{
    int table[10];
    
    for(int i =0; i<10; i ++){
        table[i]= (i+1)*5;
       
    }

    for(int i =0;i<10; i++){
            printf(" THE VALUE OF 5 x %d is %d\n",i+1, table[i]);
            
        }
    return 0;
}
#include <stdio.h>

int main()
{
    int a[2][4][7];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                printf("THE ADDRESS OF THIS 3D ARRAY ARE %u \n",&a[i][j][k]);
                
            }
            
        }
        
    }
    
    return 0;
}
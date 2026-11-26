#include <stdio.h>

void print(int a[], int c);
void print(int a[], int c)
{
    for (int i = 0; i < c; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    
}

void swap(int a[], int c);
void swap(int b[], int c)
{
    int temp;
    for (int i = 0; i < c / 2; i++)
    {
        int temp = b[i];
        b[i] = b[c - 1 - i];
        b[c - 1 - i] = temp;
    }
}

int main()
{
    int b[] = {1, 2, 3, 4, 5, 6, 7};
    print(b, 7);
    swap(b, 7);
    print(b,7);

    return 0;
}
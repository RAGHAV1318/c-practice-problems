#include <stdio.h>
float celcius(float c);
float celcius(float c)
{
    return ((c * 9) / 5) + 32;
}

int main()
{
    float a;
    printf("ENTER THE TEMP IN CELCIUS");
    scanf("%f", &a);
    printf("Your temperatue is %.2f:", celcius(a));
    return 0;
}
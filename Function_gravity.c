#include <stdio.h>
float graavity(int mass);

float graavity(int mass)
{
    return (9.8 * mass);
}

int main()
{
    float a;
    printf("ENTER THE MASS OF THE BODY");
    scanf("%f", &a);
    printf("THE FORCE OF ATTRACTION WOULD BE %.2f NEWTONS", graavity(a));

    return 0;
}
#include <stdio.h>

int main ()
{
    float x;
    scanf("%f",&x);

    float y=x<=15? 4*x/3:2.5*x-17.5;

    printf("%.2f",y);

    return 0;
}
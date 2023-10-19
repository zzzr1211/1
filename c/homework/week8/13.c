#include <stdio.h>

int main ()
{
    double L,x,rest;
    int n;

    scanf("%lf %lf",&L,&x);

    n=(int)L/x;

    rest=L-n*x;

    printf("%d %.1lf\n",n,rest);

    return 0;

}
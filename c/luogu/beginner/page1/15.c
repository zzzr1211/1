#include <stdio.h>
int main ()
{
    double x,y,a,b,capacity;
    scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
    capacity=(x*a-y*b)/(a-b);
    printf("%.2lf",capacity);
}
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double p;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=(a+b+c)*1.0/2;

    printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c)));

}